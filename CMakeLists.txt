cmake_minimum_required(VERSION 3.19)
project(OpenIW LANGUAGES CXX)

option(CMAKE_SUBMODULES "Automatically initialize and update each submodule in the repository." ON)
option(CMAKE_VCXPROJ_FILTERS "Automatically initialize and create vcxproj.filters files in the repository." ON)

# Automatically initialize and update each submodule in the repository.
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
  if(CMAKE_SUBMODULES)
    message(STATUS "Running git submodule update --init --recursive, please wait.")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} RESULT_VARIABLE RESULT)
    if(NOT RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules.")
    endif()
  endif()
endif()

# Automatically initialize and create vcxproj.filters files in the repository.
function(target_create_vcxproj_filters target_name)
  if(CMAKE_VCXPROJ_FILTERS)
    message(STATUS "Creating vcxproj.filters files, please wait.")
    get_target_property(target_sources  "${target_name}" SOURCES)
    foreach(file_name IN LISTS target_sources)
      get_filename_component(dir_name "${file_name}" PATH)
      string(REPLACE "/" "\\" group_name "${dir_name}")
      source_group("${group_name}" FILES "${file_name}")
    endforeach()
  endif()
endfunction()

# Available build configuration of the IW Engine with IDEs that support multiple configurations.
# if(CMAKE_CONFIGURATION_TYPES)
#   set(CMAKE_CONFIGURATION_TYPES IW3 IW4 IW5 T5 T6)
#   foreach(configuration IN LISTS CMAKE_CONFIGURATION_TYPES)
#     set(CMAKE_C_FLAGS_${configuration} "${CMAKE_C_FLAGS} -D${configuration}")
#     set(CMAKE_CXX_FLAGS_${configuration} "${CMAKE_CXX_FLAGS} -D${configuration}")
#     set(CMAKE_EXE_LINKER_FLAGS_${configuration} "${CMAKE_EXE_LINKER_FLAGS}")
#   endforeach()
# endif()

# Disable in-source builds to avoid cluttering the source tree with generated CMake files.
if ("${CMAKE_BINARY_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}")
  message(FATAL_ERROR "In-source builds are disabled to avoid cluttering the source tree with generated CMake files. Please create a build subdirectory and use `cmake ..` inside it.\n" "NOTE: You must delete both CMakeCache.txt and CMakeFiles/* before continuing.")
endif()

add_subdirectory(src)
