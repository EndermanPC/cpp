#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    freopen("WORDS.INP", "r", stdin);
    freopen("WORDS.OUT", "w", stdout);

    string s;
    getline(cin, s);

    stringstream iss(s);
    string words;

    int count = 0;

    while (iss >> words) {
        count++;
    }

    cout << count << endl;

    stringstream iss2(s);
    while (iss2 >> words) {
        cout << words << endl;
    }

    return 0;
}