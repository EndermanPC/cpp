#include <iostream>
using namespace std;

int main() {
    //freopen("CSUM2.INP", "r", stdin);
    //freopen("CSUM2.OUT", "w", stdout);

    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 + 1;
    } 
    else {
        cout << n / 2 + 2;
    }
    return 0;
}
