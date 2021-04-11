#ifndef FMATH_RSQRT_BENCH_H
#define FMATH_RSQRT_BENCH_H

#include <benchmark/benchmark.h>
#include <cmath>
#include "rsqrt.h"

namespace fmath::bench {
static void fm_rsqrt(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::rsqrt(1.5f);
  }
}

static void fm_rsqrt_lomont(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::rsqrt_lomont(1.5f);
  }
}

static void fm_rsqrt_quake(benchmark::State &state) {
  for (auto _ : state) {
    auto x = fmath::rsqrt_quake(1.5f);
  }
}

static void std_rsqrt(benchmark::State &state) {
  for (auto _ : state) {
    auto x = 1 / std::sqrt(1.5f);
  }
}
}


#endif //FMATH_RSQRT_BENCH_H
