#include <iostream>

// #include "recursive_fib.cpp"
#include "fib.cpp"

int main()
{

    Solution sol;

    int n;

    std::cin >> n;

    std::cout << sol.fib(n) << std::endl;

    return (0);
}
