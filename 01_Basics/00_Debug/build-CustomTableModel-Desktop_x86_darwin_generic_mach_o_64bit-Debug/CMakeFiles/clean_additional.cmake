# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CustomTableModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CustomTableModel_autogen.dir/ParseCache.txt"
  "CustomTableModel_autogen"
  )
endif()
