
#include <iostream>

size_t chain_length(size_t n)
{
    size_t length = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        ++length;
    }
    return length;
}

int main()
{
    size_t max_length = 0;
    size_t number = 1;
    for (size_t i = 1; i < 1000000; ++i) {
        size_t length = chain_length(i);
        if (length > max_length) {
            max_length = length;
            number = i;
        }
    }
    std::cout << "number = " << number << std::endl;
    return 0;
}
