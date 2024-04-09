#include <bits/stdc++.h>
using namespace std;

void PhanTich(int n) {
    ofstream out("PHANTICH.OUT");

    int count = 0;

    while (n % 2 == 0) {
        n = n / 2;
        count++;
    }
    if (count > 0) {
        out << 2 << " " << count << endl;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        count = 0;
        while (n % i == 0) {
            n = n / i;
            count++;
        }
        if (count > 0) {
            out << i << " " << count << endl;
        }
    }

    if (n > 2)
        out << n << " 1" << endl;

}

int main() {
    ifstream input("PHANTICH.INP");

    int N;

    input >> N;

    PhanTich(N);

    return 0;
}
