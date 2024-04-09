#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int getSum(int n) {
    int s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    //freopen("SIMILAR.INP", "r", stdin);
    //freopen("SIMILAR.OUT", "w", stdout);

    int a, b;
    cin >> a >> b;

    unordered_map<int, pair<int, int>> sumMap;

    for (int i = a; i <= b; ++i) {
        int sum = getSum(i);
        if (sumMap.find(sum) == sumMap.end()) {
            sumMap[sum] = make_pair(i, i);
        } else {
            sumMap[sum].second = i;
        }
    }

    int maxDiff = 0;
    for (auto &p : sumMap) {
        maxDiff = max(maxDiff, p.second.second - p.second.first);
    }

    cout << maxDiff << endl;

    return 0;
}
