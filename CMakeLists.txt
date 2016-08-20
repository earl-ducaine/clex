


# molloyd@beaglebone:~/exploringBB/extras/cmake$ tree studentlib_shared/
#  studentlib_shared/
#  |-- CMakeLists.txt
#  |-- build
#  |-- include
#  |   \-- Student.h
#  \-- src
#  .   \-- Student.cpp
#  3 directories, 3 files



cmake_minimum_required(VERSION 2.8.9)
project(ecl_implemented_sh)
set(CMAKE_BUILD_TYPE Release)
# find_package(ecl)

#SET(ECL_LIB /usr/lib)
#SET(BOOST_INCLUDEDIR /usr/local/Cellar/boost/1.58.0/include)
#find_package(ecl REQUIRED)

#Bring the headers, such as Student.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB LIB_SOURCES "lib/*.c")
file(GLOB SOURCES "src/*.c")

#Generate the shared library from the sources
add_library(test_ecl_implemented_sh SHARED ${LIB_SOURCES})

#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
install(TARGETS test_ecl_implemented_sh DESTINATION /usr/lib)

add_executable(ecl_implemented_sh ${SOURCES})

target_link_libraries(ecl_implemented_sh test_ecl_implemented_sh /usr/lib/libecl.so.15.3 )
