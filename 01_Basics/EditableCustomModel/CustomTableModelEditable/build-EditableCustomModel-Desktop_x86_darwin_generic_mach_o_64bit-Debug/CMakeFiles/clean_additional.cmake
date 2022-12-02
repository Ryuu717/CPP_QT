# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CustomTableModelEditable_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CustomTableModelEditable_autogen.dir/ParseCache.txt"
  "CustomTableModelEditable_autogen"
  )
endif()
