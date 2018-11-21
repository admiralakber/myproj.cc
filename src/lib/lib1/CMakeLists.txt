# EZMake myproj.cc/src/lib/lib1/CMakeLists.txt
ez_unit_init(lib)

ez_this_unit_add_code(myclass hh cc)

ez_this_unit_build(SHARED)
#ez_this_unit_link(PUBLIC ${PROJECT_NAME}_libunit ${PROJECT_NAME}_extern_target)

# Library unit testing
ez_this_unit_add_tests(tests/mytest.cc)
#ez_this_unit_link_tests(PUBLIC test_main)

ez_this_unit_install()
