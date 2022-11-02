# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Covid19RegistrationSystem2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Covid19RegistrationSystem2_autogen.dir/ParseCache.txt"
  "Covid19RegistrationSystem2_autogen"
  )
endif()
