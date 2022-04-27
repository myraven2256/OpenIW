include_directories(
  .
)

add_compile_options(
  /MP # Enables parallel builds
  $<$<CONFIG:Debug>:/Zi> # Produces a separate PDB file that contains all the symbolic debugging information.
)

add_subdirectory(OpenIW)
add_subdirectory(goldberg_emulator)
add_subdirectory(reflective_pe)
add_subdirectory(patches)

# Use vcpkg they said, it will be fun, they said.
# https://github.com/microsoft/vcpkg/issues/11307#issuecomment-626830976

set_target_properties(reflective_pe PROPERTIES FOLDER "Libraries")
set_target_properties(reflective_pe_xp PROPERTIES FOLDER "Libraries")
set_target_properties(patches PROPERTIES FOLDER "Libraries")
set_target_properties(patches_xp PROPERTIES FOLDER "Libraries")
set_target_properties(steam_api PROPERTIES FOLDER "Libraries")
set_target_properties(steam_api64 PROPERTIES FOLDER "Libraries")
if (OPENIW_STEAM_EMU_EXPERIMENTAL_BUILD)
set_target_properties(steamclient PROPERTIES FOLDER "Libraries")
set_target_properties(steamclient64 PROPERTIES FOLDER "Libraries")
set_target_properties(steamnetworkingsockets PROPERTIES FOLDER "Libraries")
set_target_properties(steamnetworkingsockets64 PROPERTIES FOLDER "Libraries")
set_target_properties(lobby_connect PROPERTIES FOLDER "Libraries")
set_target_properties(lobby_connect64 PROPERTIES FOLDER "Libraries")
set_target_properties(generate_interfaces_file PROPERTIES FOLDER "Libraries")
set_target_properties(generate_interfaces_file64 PROPERTIES FOLDER "Libraries")
endif()
