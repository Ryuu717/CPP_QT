# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ContactForm_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ContactForm_autogen.dir/ParseCache.txt"
  "ContactForm_autogen"
  )
endif()
