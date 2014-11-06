
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

size_t number_of_divisors(size_t number)
{
    size_t count = 0;
    size_t sqr = std::sqrt(number);
    for (size_t i = 1; i <= sqr; ++i) {
        if (number % i == 0) {
            count += 2;
        }
    }
    if (sqr * sqr == number) {
        --count;
    }
    return count;
}

int main()
{
    size_t i = 2;
    size_t number = 1;
    while (number_of_divisors(number) < 500) {
        number += i;
        ++i;
    }
    std::cout << number << std::endl;
    return 0;
}
