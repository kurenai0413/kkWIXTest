cmake_minimum_required( VERSION 3.15 )
project( kkWIXTest )

add_subdirectory( test_tool )
add_subdirectory( test_product )

set( CPACK_GENERATOR WIX )
set( CPACK_PACKAGE_NAME "kkWIXTest" )
set( CPACK_PACKAGE_VENDER "kkWorks" )
set( CPACK_PACKAGE_DESCRIPTION_SUMMARY "WIX Example Project" )
set( CPACK_PACKAGE_VERSION_MAJOR 2 )
set( CPACK_WIX_EXTRA_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/package/extra.wxs )
set( CPACK_WIX_PATCH_FILE ${CMAKE_CURRENT_SOURCE_DIR}/package/patch.xml )

include(CPack)