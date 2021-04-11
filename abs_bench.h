#ifndef FMATH_ABS_BENCH_H
#define FMATH_ABS_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "abs.h"

namespace fmath::bench {
static void fm_abs(benchmark::State& state) {
  for (auto _ : state) {
    auto x = fmath::abs(1234);
  }
}

static void std_abs(benchmark::State& state) {
  for (auto _ : state) {
    auto x = std::abs(1234);
  }
}
}

#endif //FMATH_EXP_BENCH_H