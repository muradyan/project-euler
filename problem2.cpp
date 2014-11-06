
#include <iostream>

int main()
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 0;
	int sum = 2;
	while (true) {
		a3 = a2 + a1;
		a1 = a2;
		a2 = a3;
		if (a3 >= 4000000) {
			break;
		}
		if (a3 % 2 == 0) {
			sum += a3;
		}

	}
	std::cout << sum << std::endl;
	return 0;
}
