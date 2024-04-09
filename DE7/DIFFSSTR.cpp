#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int xuly(const string& s) {
    int n = s.length();

    for (int len = 1; len <= n; ++len) {
        unordered_set<string> substrings;

        for (int i = 0; i <= n - len; ++i) {
            string substring = s.substr(i, len);
            substrings.insert(substring);
        }

        if (substrings.size() == n - len + 1) {
            return len;
        }
    }

    return n;
}

int main() {
    freopen("DIFFSSTR.INP", "r", stdin);
    freopen("DIFFSSTR.OUT", "w", stdout);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int doPhanBiet = xuly(s);
    cout << doPhanBiet << endl;

    return 0;
}
