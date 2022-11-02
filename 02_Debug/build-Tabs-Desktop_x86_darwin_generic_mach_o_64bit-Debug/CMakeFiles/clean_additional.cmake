# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Tabs2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Tabs2_autogen.dir/ParseCache.txt"
  "Tabs2_autogen"
  )
endif()
