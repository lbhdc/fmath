#ifndef FMATH_LOG_BENCH_H
#define FMATH_LOG_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "log.h"

namespace fmath::bench {
static void fm_log2(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::log2(1.0f));
  }
}

static void std_log2(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::log2(1.0f));
  }
}
}

#endif //FMATH_EXP_BENCH_H
