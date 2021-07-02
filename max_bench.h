#ifndef FMATH_MAX_BENCH_H
#define FMATH_MAX_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "max.h"

namespace fmath::bench {
static void fm_ceil(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::ceil(1.1f));
  }
}

static void std_ceil(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::ceil(1.1f));
  }
}

static void fm_max(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::max(1, 2));
  }
}

static void std_max(benchmark::State& state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::max(1, 2));
  }
}
}

#endif //FMATH_EXP_BENCH_H
