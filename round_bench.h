#ifndef FMATH_ROUND_BENCH_H
#define FMATH_ROUND_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "round.h"

namespace fmath::bench {
static void fm_round(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::round(1.5f));
  }
}

static void std_round(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = std::round(1.5f));
  }
}

static void fm_roundp(benchmark::State &state) {
  float x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::roundp(0.125f, 2));
  }
}

static void std_roundp(benchmark::State &state) {
  float x;
  float pow10;
  for (auto _ : state) {
    benchmark::DoNotOptimize(pow10 = std::pow(10, 2));
    benchmark::DoNotOptimize(x = std::round(0.125f * pow10) / pow10);
  }
}
}

#endif //FMATH_ROUND_BENCH_H
