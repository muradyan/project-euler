
#include <iostream>

int main()
{
    for (size_t a = 1; a < 1000; ++a) {
        for (size_t b = 1; b < 1000; ++b) {
            if (1000000 - 2000 * (a + b) + 2 * a * b == 0) {
                std::cout << a * b * (1000 - a - b) << std::endl;
                return 0;
            }
        }
    }
    return 0;
}
