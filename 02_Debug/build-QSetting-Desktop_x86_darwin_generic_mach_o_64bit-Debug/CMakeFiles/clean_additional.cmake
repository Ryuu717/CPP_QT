# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QSetting_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QSetting_autogen.dir/ParseCache.txt"
  "QSetting_autogen"
  )
endif()
