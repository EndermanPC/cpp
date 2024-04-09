#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("DELX.INP", "r", stdin);
    freopen("DELX.OUT", "w", stdout);

    char x;
    string s;

    cin >> x;
    cin.ignore();

    getline(cin, s);

    size_t pos = 0;
    while ((pos = s.find(x, pos)) != string::npos) {
        s.erase(pos, 1);
    }

    cout << s << endl;

    return 0;
}
