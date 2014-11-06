
#include <iostream>
#include <vector>

size_t routes_count(size_t cube_size)
{
    std::vector<size_t> l(cube_size + 1, 1);
    for (size_t i = 1; i <= cube_size; ++i) {
        for (size_t j = 1; j < i; ++j) {
            l[j] = l[j] + l[j - 1];
        }
        l[i] = l[i - 1] * 2;
    }
    return l[cube_size];
}

int main()
{
    std::cout << routes_count(20) << std::endl;
    return 0;
}
