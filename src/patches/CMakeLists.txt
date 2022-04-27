file(GLOB_RECURSE patches RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

add_library(patches STATIC
    ${patches}
)

target_precompile_headers(patches
PRIVATE
    ${CMAKE_CXX_PCH}
)

target_create_vcxproj_filters(patches)

#

add_library(patches_xp STATIC
    ${patches}
)

target_precompile_headers(patches_xp
PRIVATE
    ${CMAKE_CXX_PCH}
)

set_target_properties(patches_xp
PROPERTIES
  VS_PLATFORM_TOOLSET "v90"
)

target_create_vcxproj_filters(patches_xp)
