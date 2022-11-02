# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GuessNumberGame_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GuessNumberGame_autogen.dir/ParseCache.txt"
  "GuessNumberGame_autogen"
  )
endif()
