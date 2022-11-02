# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QTextEdit_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QTextEdit_autogen.dir/ParseCache.txt"
  "QTextEdit_autogen"
  )
endif()
