cmake_minimum_required(VERSION 3.17)
project(fmath)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# [ source sets ]
set(headers lib.h lib.cc magic.h bits.h rand.h concept.h sign.h min.h max.h
    numeric.h abs.h div.h cast.h exp.h log.h pow.h round.h rsqrt.h sqrt.h)
set(src lib.cc)
set(bench_src bencher.cc abs_bench.h)
set(test_src tester.cc bits_test.cc rand_test.cc sign_test.cc min_test.cc
    max_test.cc numeric_test.cc abs_test.cc cast_test.cc exp_test.cc log_test.cc
    pow_test.cc round_test.cc rsqrt_test.cc sqrt_test.cc)

# [ artifacts ]
add_library(fmath SHARED ${headers} ${src})
add_executable(bencher ${headers} ${bench_src})
add_executable(tester ${headers} ${test_src})

# [ dependencies ]
find_package(benchmark REQUIRED)
find_package(GTest 1.10 REQUIRED)
set(bench_deps benchmark)
set(test_deps gtest)

# [ links ]
target_link_libraries(bencher fmath ${bench_deps})
target_link_libraries(tester fmath ${test_deps})

# [ flags ]
set(warnings -Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast
    -Wcast-align -Wunused -Woverloaded-virtual -Wpedantic -Wconversion
    -Wsign-conversion -Wnull-dereference -Wdouble-promotion -Wformat=2
    -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches
    -Wlogical-op -Wuseless-cast)
target_compile_options(fmath PUBLIC ${warnings})