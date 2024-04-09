#include <iostream>
#include <string>

using namespace std;

int main() {

    freopen("REPL.INP", "r", stdin);
    freopen("REPL.OUT", "w", stdout);

    string s1, s2, s;
    
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s);

    size_t pos = 0;
    while ((pos = s.find(s1, pos)) != string::npos) {
        s.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    cout << s << endl;

    return 0;
}