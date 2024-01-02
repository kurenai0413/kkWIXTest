cmake_minimum_required( VERSION 3.15 )
project( test_product )

add_executable( ${PROJECT_NAME} test_product.cpp )

install( TARGETS ${PROJECT_NAME} DESTINATION bin )