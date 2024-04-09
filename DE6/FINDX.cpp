#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    freopen("FINDX.INP", "r", stdin);
    freopen("FINDX.OUT", "w", stdout);

    char x;
    string s;

    cin.get(x);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s);

    int sum1 = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == x) {
            sum1++;
        }
    }

    cout << sum1 << endl;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == x) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
