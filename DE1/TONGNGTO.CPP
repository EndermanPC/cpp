#include <bits/stdc++.h>
using namespace std;

bool NT(int a) {
    if (a == 2) return true;
    if (a <= 1 || a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a); i+=2)
        if (a % i == 0) return false;

    return true;
}

int tong(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i++) {
        if (NT(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    ifstream input("TONGNGTO.INP");
    ofstream output("TONGNGTO.OUT");

    int N;
    input >> N;

    output << tong(N) << endl;
}