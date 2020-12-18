#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>

namespace bm = boost::multiprecision;

template<unsigned N>
struct factorial {
    static constexpr bm::uint1024_t value = N * factorial<N - 1>::value;
};
template<>
struct factorial<0> {
    static constexpr bm::uint1024_t value = 1;
};

int main( )
{
    const bm::uint1024_t factorial_860 = factorial<860>::value;
    std::cout << factorial_860;
    return 0;
}
