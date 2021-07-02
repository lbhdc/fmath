#ifndef FMATH_DIV_BENCH_H
#define FMATH_DIV_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "div.h"

namespace fmath::bench {
static void fm_div(benchmark::State& state) {
  int x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(x = fmath::div(4, 2));
  }
}

static void std_div(benchmark::State& state) {
  int x;
  for (auto _ : state) {
    benchmark::DoNotOptimize(4/2);
  }
}
}

#endif //FMATH_DIV_BENCH_H
