#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    freopen("CHAR.INP", "r", stdin);
    freopen("CHAR.OUT", "w", stdout);

    string s;
    getline(cin, s);

    map<char, int> charCount;

    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            charCount[c]++;
        }
    }

    for (char c = 'a'; c <= 'z'; ++c) {
        if (charCount[c] > 0) {
            cout << c << " " << charCount[c] << endl;
        }
    }

    return 0;
}
