cmake_minimum_required(VERSION 3.17)
project(fmath)

set(CMAKE_CXX_STANDARD 20)

# [ source sets ]
set(headers lib.h lib.cc floats.h magic.h bits.h rand.h)
set(src lib.cc)
set(test_src tester.cc lib_test.cc floats_test.cc bits_test.cc)

# [ artifacts ]
add_library(fmath SHARED ${headers} ${src})
add_executable(tester ${headers} ${test_src})

# [ dependencies ]
find_package(GTest 1.10 REQUIRED)
set(test_deps gtest)

# [ links ]
target_link_libraries(tester fmath ${test_deps})

# [ flags ]
set(warnings -Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast
    -Wcast-align -Wunused -Woverloaded-virtual -Wpedantic -Wconversion
    -Wsign-conversion -Wnull-dereference -Wdouble-promotion -Wformat=2
    -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches
    -Wlogical-op -Wuseless-cast)
target_compile_options(fmath PUBLIC ${warnings})
target_compile_options(tester PUBLIC)