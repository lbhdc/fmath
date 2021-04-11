#ifndef FMATH_EXP_BENCH_H
#define FMATH_EXP_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "exp.h"

namespace fmath::bench {
static void fm_exp2(benchmark::State& state) {
  for (auto _ : state) {
    auto x = fmath::exp2(1.0f);
  }
}

static void std_exp2(benchmark::State& state) {
  for (auto _ : state) {
    auto x = std::exp2(1.0f);
  }
}
}

#endif //FMATH_EXP_BENCH_H
