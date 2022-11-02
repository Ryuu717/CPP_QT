# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Signup_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Signup_autogen.dir/ParseCache.txt"
  "Signup_autogen"
  )
endif()
