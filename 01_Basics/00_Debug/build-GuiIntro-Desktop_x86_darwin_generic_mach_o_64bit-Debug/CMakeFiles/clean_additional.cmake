# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GuiIntro_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GuiIntro_autogen.dir/ParseCache.txt"
  "GuiIntro_autogen"
  )
endif()
