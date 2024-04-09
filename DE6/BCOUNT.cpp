#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    //freopen("BCOUNT.INP", "r", stdin);
    //freopen("BCOUNT.OUT", "w", stdout);

    string s;
    getline(cin, s);

    int count[10] = {0};

    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            int digit = s[i] - '0';
            count[digit]++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout << count[i] << " ";
    }

    return 0;
}
