# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Checkbox_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Checkbox_autogen.dir/ParseCache.txt"
  "Checkbox_autogen"
  )
endif()
