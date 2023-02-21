#include<iostream>
using namespace std;

// general code for factorial function. The unknown value n is only available till code runtime phase. 
unsigned factorial(unsigned n) {
	return n == 0 ? 1 : n * factorial(n - 1); 
}

int main()
{
    size_t n = 3;
    size_t F;
    F = factorial( n );
    cout << n << "! = " << F << endl;
    return 0;
}

