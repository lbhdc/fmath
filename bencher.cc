#include <benchmark/benchmark.h>
#include "abs_bench.h"
#include "exp_bench.h"
#include "log_bench.h"
#include "max_bench.h"
#include "min_bench.h"
#include "pow_bench.h"
#include "round_bench.h"
#include "rsqrt_bench.h"
#include "sqrt_bench.h"

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
BENCHMARK(fm_pow);
BENCHMARK(std_pow);
BENCHMARK(fm_round);
BENCHMARK(std_round);
BENCHMARK(fm_roundp);
BENCHMARK(std_roundp);
BENCHMARK(fm_rsqrt);
BENCHMARK(fm_rsqrt_lomont);
BENCHMARK(fm_rsqrt_quake);
BENCHMARK(std_rsqrt);
BENCHMARK(fm_sqrt);
BENCHMARK(std_sqrt);
BENCHMARK_MAIN();

