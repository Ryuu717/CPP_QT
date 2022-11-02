# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/JsonClient_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/JsonClient_autogen.dir/ParseCache.txt"
  "JsonClient_autogen"
  )
endif()
