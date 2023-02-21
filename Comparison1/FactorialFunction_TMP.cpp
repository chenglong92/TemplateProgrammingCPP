#include<iostream>
using namespace std;

// TMP code for factorial function. The value n and function will be available at compile-time phase,
// so optimisation like loop unrolling can be well achieved.
template <unsigned N>
struct factorial {
	static constexpr unsigned value = N * factorial<N - 1>::value;
};

template <>
struct factorial<0> {
	static constexpr unsigned value = 1;
};

int main()
{
    constexpr size_t n = 3;
    size_t F;
    F = factorial<n>::value;
    cout << n << "! = " << F << endl;
    return 0;
}

