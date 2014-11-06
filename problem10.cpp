
#include <iostream>
#include <vector>
#include <cmath>

typedef std::vector<bool> bools;

void compute_primes(bools& primes)
{
    primes[0] = false;
    primes[1] = false;
    size_t size = primes.size();
    for (size_t i = 2; i < size; ++i) {
        for (size_t k = 2; i * k < primes.size(); ++k) {
            primes[i * k] = false;
        }
    }
}

int main()
{
    const size_t size = 2000000;
    std::vector<bool> primes(size, true);
    compute_primes(primes);
    size_t sum = 0;
    for (size_t i = 0; i < size; ++i) {
        if (primes[i]) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
