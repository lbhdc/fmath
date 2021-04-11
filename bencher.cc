#include <benchmark/benchmark.h>
#include "abs_bench.h"

using namespace fmath::bench;

BENCHMARK(fm_abs);
BENCHMARK(std_abs);
BENCHMARK_MAIN();
