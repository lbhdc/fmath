#ifndef FMATH_SQRT_BENCH_H
#define FMATH_SQRT_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "sqrt.h"

namespace fmath::bench {
static void fm_sqrt(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::sqrt(1.5f);
  }
}

static void std_sqrt(benchmark::State &state) {
  for (auto _ : state) {
    auto x = std::sqrt(1.5f);
  }
}
}

#endif //FMATH_SQRT_BENCH_H
