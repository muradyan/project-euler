
#include <iostream>
#include <vector>
#include <cmath>

typedef std::vector<bool> bools;

void compute_primes(bools& primes)
{
    primes[0] = false;
    primes[1] = false;
    size_t size = std::sqrt(primes.size());
    for (size_t i = 2; i < size; ++i) {
        for (size_t k = 2; i * k < primes.size(); ++k) {
            primes[i * k] = false;
        }
    }
}

size_t get_prime_number(const bools& primes, size_t number)
{
    for (size_t i = 0, j = 0; i < primes.size(); ++i) {
        if (primes[i]) {
            ++j;
            if (j == number) {
                return i;
            }
        }
    }
    return 0;
}



int main()
{
    const size_t size = 500000;
    std::vector<bool> primes(size, true);
    compute_primes(primes);
    std::cout << get_prime_number(primes, 10001) << std::endl;
    // 104743
    return 0;
}
