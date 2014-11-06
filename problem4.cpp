
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

bool is_palindrome(size_t n)
{
	std::ostringstream s;
	s << n;
	std::string str = s.str();
	return (str == std::string(str.rbegin(), str.rend()));
}

int main()
{
	
	std::vector<size_t> v;
	for (size_t i = 999; i > 100; --i) {
		for (size_t j = 999; j > 100; --j) {
			if (is_palindrome(i * j)) {
				v.push_back(i * j);
			}
		}
	}
	std::sort(v.begin(), v.end(), std::greater<size_t>());
	std::cout << v.front() << std::endl;
	return 0;
}
