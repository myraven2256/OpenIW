include_directories(
  .
)

add_compile_options(
  /MP # Enables parallel builds
  $<$<CONFIG:Debug>:/Zi> # Produces a separate PDB file that contains all the symbolic debugging information.
)

add_subdirectory(OpenIW)
add_subdirectory(goldberg_emulator)
