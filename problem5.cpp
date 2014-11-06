
#include <iostream>
#include <cmath>

size_t gcd(size_t a, size_t b)
{
    size_t max = std::max(a, b);
    size_t min = std::min(a, b);
    while (min != 0) {
        size_t temp = max;
        max = min;
        min = temp % min;
    }
    return max;
}

int main()
{
    //std::cout << 2 * 3 * 2 * 5 * 7 * 2 * 3 * 11 * 13 * 2 * 17 * 19 
    //    << std::endl; 
    // 232792560
    size_t n = 1;
    for (size_t i = 2; i <= 20; ++i) {
        if (gcd(n, i) == 1) {
            n *= i;
        } else if (gcd(n, i) != i) {
            n *= gcd(n, i);
        }
    }
    std::cout << n << std::endl;
    return 0;
}
