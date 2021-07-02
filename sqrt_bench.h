#ifndef FMATH_SQRT_BENCH_H
#define FMATH_SQRT_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "sqrt.h"

namespace fmath::bench {
static void fm_sqrt(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::sqrt(1.5f));
  }
}

static void std_sqrt(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::sqrt(1.5f));
  }
}
}

#endif //FMATH_SQRT_BENCH_H
