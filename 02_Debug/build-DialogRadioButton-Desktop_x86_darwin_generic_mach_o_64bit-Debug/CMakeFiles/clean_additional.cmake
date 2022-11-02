# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DialogRadioButton_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DialogRadioButton_autogen.dir/ParseCache.txt"
  "DialogRadioButton_autogen"
  )
endif()
