# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Menu_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Menu_autogen.dir/ParseCache.txt"
  "Menu_autogen"
  )
endif()
