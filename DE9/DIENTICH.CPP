#include <iostream>
#include <cmath>

int main() {
    //std::freopen("DIENTICH.INP", "r", stdin);
    //std::freopen("DIENTICH.OUT", "w", stdout);

    long double R;
    std::cin >> R;

    if (R < sqrt(2)) {
        std::cout << 0 << std::endl;
        return 0;
    }

    long long result = round(R * sqrt(2)) * round(R * sqrt(2));

    std::cout << result << std::endl;

    return 0;
}
