# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QFileDialog1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QFileDialog1_autogen.dir/ParseCache.txt"
  "QFileDialog1_autogen"
  )
endif()
