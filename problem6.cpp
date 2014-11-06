
#include <iostream>

size_t sum(size_t first, size_t last)
{
    size_t r = 0;
    for (size_t i = first; i <= last; ++i) {
        r += i;
    }
    return r;
}

int main()
{
    size_t r1 = sum(1, 100);
    r1 *= r1;
    size_t r2 = 0;
    for (size_t i = 1; i <= 100; ++i) {
        r2 += i * i;
    }
    std::cout << r1 - r2;
    return 0;
}
