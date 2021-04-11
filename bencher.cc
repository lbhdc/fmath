#include <benchmark/benchmark.h>
#include "abs_bench.h"
#include "exp_bench.h"
#include "log_bench.h"
#include "max_bench.h"
#include "min_bench.h"

using namespace fmath::bench;

BENCHMARK(fm_abs);
BENCHMARK(std_abs);
BENCHMARK(fm_exp2);
BENCHMARK(std_exp2);
BENCHMARK(fm_log2);
BENCHMARK(std_log2);
BENCHMARK(fm_ceil);
BENCHMARK(std_ceil);
BENCHMARK(fm_max);
BENCHMARK(std_max);
BENCHMARK(fm_floor);
BENCHMARK(std_floor);
BENCHMARK(fm_min);
BENCHMARK(std_min);
BENCHMARK_MAIN();

