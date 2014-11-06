
#include <iostream>

int main()
{
	size_t n = 600851475143;
	size_t factor = 2;
	size_t lastFactor = 1;
	while (n > 1) {
		if (n % factor == 0) {
			lastFactor = factor;
			n = n / factor;
			while (n % factor == 0) {
				n = n / factor;
			}
		}
		++factor;
	}
	std::cout << lastFactor << std::endl;
}
