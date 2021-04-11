#include <gtest/gtest.h>
#include "sign.h"

namespace {
TEST(lib, same_signs) {
ASSERT_TRUE(fmath::same_signs(1, 1));
ASSERT_TRUE(fmath::same_signs(-1, -1));
}

TEST(lib, sign) {
ASSERT_EQ(fmath::sign(1), 0);
ASSERT_EQ(fmath::sign(-1), -1);
}
}