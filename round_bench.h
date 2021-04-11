#ifndef FMATH_ROUND_BENCH_H
#define FMATH_ROUND_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "round.h"

namespace fmath::bench {
static void fm_round(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::round(1.5f);
  }
}

static void std_round(benchmark::State &state) {
  for (auto _ : state) {
    auto x = std::round(1.5f);
  }
}

static void fm_roundp(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::roundp(0.125f, 2);
  }
}

static void std_roundp(benchmark::State &state) {
  for (auto _ : state) {
    float pow10 = std::pow(10, 2);
    auto x = std::round(0.125f * pow10) / pow10;
  }
}
}

#endif //FMATH_ROUND_BENCH_H
