#ifndef FMATH_MIN_BENCH_H
#define FMATH_MIN_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "min.h"

namespace fmath::bench {
static void fm_floor(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::floor(1.1f));
  }
}

static void std_floor(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::floor(1.1f));
  }
}

static void fm_min(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::min(1, 2));
  }
}

static void std_min(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::min(1, 2));
  }
}
}
#endif //FMATH_MIN_BENCH_H
