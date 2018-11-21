# EZMake myproj.cc/src/bin/app1/CMakeLists.txt
ez_unit_init(bin)


ez_this_unit_add_source(main.cc)

ez_this_unit_build()
ez_this_unit_link(PUBLIC ${PROJECT_NAME}_lib1)

ez_this_unit_install()
