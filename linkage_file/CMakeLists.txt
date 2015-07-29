cmake_minimum_required(VERSION 3.2)
add_executable(main
  main.cpp
)

find_package( ZLIB REQUIRED )
if ( ZLIB_FOUND )
  include_directories( ${ZLIB_INCLUDE_DIRS} )
  target_link_libraries(main ${ZLIB_LIBRARIES} )
endif( ZLIB_FOUND )


