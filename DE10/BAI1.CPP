#include <bits/stdc++.h>
#define ll long long

ll get_back(ll i) {
    ll b = 0;
    while (i != 0) {
        b = b*10+i%10;
        i /= 10;
    }
    return b;
}

int main() {
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);

    int a;
    std::cin >> a;
    std::vector<ll> arr(a);

    for (int i = 0; i < a; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < a; ++i) {
        if (std::__gcd(arr[i], get_back(arr[i])) == 1)
            std::cout << 1 << std::endl;
        else std::cout << 0 << std::endl;
    }

    return 0;
}
