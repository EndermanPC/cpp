#include <bits/stdc++.h>
using namespace std;

bool checking(int num) {
    while (num != 0) {
        int digit = num % 10;
        if (digit != 6 && digit != 8) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    ifstream input("PRUMBER.INP");
    ofstream output("PRUMBER.OUT");

    int n;
    input >> n;

    int bn = 0;
    for (int i = 0; i < n; i++) {
        int checker;
        input >> checker;
        if (checking(checker)) bn++;
    }

    output << bn << endl;
}