cmake_minimum_required(VERSION 3.17)
project(fmath)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# [ source sets ] =============================================================-
set(headers lib.h abs.h bits.h cast.h concept.h div.h exp.h log.h magic.h max.h
    min.h numeric.h pow.h rand.h round.h rsqrt.h sign.h sqrt.h)
set(src lib.cc)
set(bench_headers abs_bench.h exp_bench.h log_bench.h max_bench.h min_bench.h
    pow_bench.h round_bench.h rsqrt_bench.h sqrt_bench.h)
set(test_src abs_test.cc bits_test.cc cast_test.cc exp_test.cc log_test.cc
    max_test.cc min_test.cc numeric_test.cc pow_test.cc rand_test.cc
    round_test.cc rsqrt_test.cc sign_test.cc  sqrt_test.cc)

# [ artifacts ] ===============================================================-
add_library(fmath SHARED lib.cc ${headers} ${src})
add_executable(bencher bencher.cc ${headers} ${bench_headers})
add_executable(tester tester.cc ${headers} ${test_src})

# [ dependencies ] ============================================================-
find_package(benchmark REQUIRED)
find_package(GTest 1.10 REQUIRED)
set(bench_deps benchmark)
set(test_deps gtest)

# [ links ]====================================================================-
target_link_libraries(bencher ${bench_deps})
target_link_libraries(tester ${test_deps})

# [ flags ] ===================================================================-
if(COMPILER_SUPPORTS_MARCH_NATIVE)
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -march=native)
endif()
if(CMAKE_BUILD_TYPE MATCHES Release)
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -O3)
endif()
set(warnings -Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast
    -Wcast-align -Wunused -Woverloaded-virtual -Wpedantic -Wconversion
    -Wsign-conversion -Wnull-dereference -Wdouble-promotion -Wformat=2
    -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches
    -Wlogical-op -Wuseless-cast)
target_compile_options(fmath PUBLIC ${warnings})
target_compile_options(bencher PUBLIC)