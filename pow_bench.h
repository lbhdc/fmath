#ifndef FMATH_POW_BENCH_H
#define FMATH_POW_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "pow.h"

namespace fmath::bench {
static void fm_pow(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::pow(2.0f, 2.0f);
  }
}

static void std_pow(benchmark::State &state) {
  for (auto _ : state) {
    auto x = std::pow(2.0f, 2.0f);
  }
}
}

#endif //FMATH_POW_BENCH_H
