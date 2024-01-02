cmake_minimum_required( VERSION 3.15 )
project( test_tool )

add_executable( ${PROJECT_NAME} test_tool.cpp )

install( TARGETS ${PROJECT_NAME} DESTINATION utilities )