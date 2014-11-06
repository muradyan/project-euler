
#include <iostream>
#include <string>
#include <algorithm>

template <typename I>
bool next_permutation_m(I first, I last)
{
    if (first == last) {
        return false;
    }
    I i = first;
    ++i;
    if (i == last) {
        return false;
    }
    i = last;
    --i;

    for(;;)
    {
        I ii = i;
        --i;
        if (*i < *ii)
        {
            I j = last;
            while (*i >= *--j)
            {}
            std::iter_swap(i, j);
            std::reverse(ii, last);
            return true;
        }
        if (i == first)
        {
            std::reverse(first, last);
            return false;
        }
    }
}

/*
0123456789
0123456798
0123456879
0123456897
0123456978
0123456987
0123457689
0123457698
0123457869
0123457896
0123457968
*/

int main()
{
    std::string v = "0123456789";
    for (size_t i = 0; i < 10; ++i) {
        std::cout << v << std::endl;
        next_permutation_m(v.begin(), v.end());
    }
    std::cout << v << std::endl;
    return 0;
}
