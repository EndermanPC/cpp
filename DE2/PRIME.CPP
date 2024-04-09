#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

bool NT(int a) {
    if (a == 2) return true;
    if (a <= 1 || a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a); i+=2)
        if (a % i == 0) return false;

    return true;
}

int main() {
    ifstream input("PRIME.INP");
    ofstream output("PRIME.OUT");

    int n;
    input >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        input >> arr[i];
    }

    int a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        if (NT(arr[i])) {
            a++;
            b+=arr[i];
        }
    }

    output << a << " " << b << endl;

    return 0;
}