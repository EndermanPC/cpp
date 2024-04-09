#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int finding(const string& s) {
    unordered_map<char, int> countMap;
    int uniqueCount = 0;

    for (char c : s) {
        countMap[c]++;
    }

    for (int i = 0; i < s.length(); ++i) {
        if (countMap[s[i]] == 1) {
            uniqueCount++;
        }
        if (uniqueCount == 1) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    //freopen("SCHAR.INP", "r", stdin);
    //freopen("SCHAR.OUT", "w", stdout);

    int T;
    cin >> T;

    vector<int> arr;

    for (int t = 0; t < T; ++t) {
        string s;
        cin >> s;

        int viTri = finding(s);
        arr.push_back(viTri);
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
