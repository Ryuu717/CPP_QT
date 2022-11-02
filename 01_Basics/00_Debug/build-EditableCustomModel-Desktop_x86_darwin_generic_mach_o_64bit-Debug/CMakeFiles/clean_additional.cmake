# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/EditableCustomModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/EditableCustomModel_autogen.dir/ParseCache.txt"
  "EditableCustomModel_autogen"
  )
endif()
