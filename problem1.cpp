
#include <iostream>

int main()
{
	int n = 0;
	for (size_t i = 1; i < 1000; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			n += i;
		}
	}
	std::cout << n << std::endl;
	return 0;
}
