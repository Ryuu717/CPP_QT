# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CheckBoxesRadioButtons_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CheckBoxesRadioButtons_autogen.dir/ParseCache.txt"
  "CheckBoxesRadioButtons_autogen"
  )
endif()
