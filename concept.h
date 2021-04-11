#ifndef FMATH_CONCEPT_H
#define FMATH_CONCEPT_H

#include <concepts>

namespace fmath {
template<typename T>
concept Number = std::is_integral_v<T> || std::is_floating_point_v<T>;
}

#endif //FMATH_CONCEPT_H
