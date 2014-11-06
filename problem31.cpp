
#include <iostream>

int main()
{
    int target  = 200;
    int ways = 0;
    for (int a = target; a >= 0; a -= 200) {
        for (int b = a; b >= 0; b -= 100) {
            for (int c = b; c >= 0; c -= 50) {
                for (int d = c; d >= 0; d -= 20) {
                    for (int e = d; e >= 0; e -= 10) {
                        for (int f = e; f >= 0; f -= 5) {
                            for (int g = f; g >= 0; g -= 2) {
                                std::cout << "200 - " << (target - a) / 200 << " " 
                                          << "100 - " << (a - b) / 100 << " " 
                                          << "50 - "  << (b - c) / 50  << " "
                                          << "20 - "  << (c - d) / 20  << " " 
                                          << "10 - "  << (d - e) / 10  << " " 
                                          << "5 - "   << (e - f) / 5   << " "
                                          << "2 - "   << (f - g) / 2   << " "
                                          << "1 - "   << g << std::endl;
                                ways++;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
