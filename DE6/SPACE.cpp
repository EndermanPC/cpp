#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("SPACE.INP", "r", stdin);
    freopen("SPACE.OUT", "w", stdout);

    string s;
    getline(cin, s);

    int pos1 = -1, pos2 = -1;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            pos1 = i;
            break;
        }
    }

    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == ' ') {
            pos2 = i;
            break;
        }
    }
    cout << pos1 << " " << pos2 << endl;
    return 0;
}
