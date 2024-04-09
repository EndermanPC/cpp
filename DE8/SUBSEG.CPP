#include <iostream>
#include <vector>
#include <set>

using namespace std;

int Prepair(int n, int k, vector<int>& a) {
    int count = 0;

    for (int i = 0; i < n; ++i) {
        set<int> distinct_elements;
        for (int j = i; j < n; ++j) {
            distinct_elements.insert(a[j]);
            if (distinct_elements.size() <= k) {
                count++;
            } else {
                break;
            }
        }
    }

    return count;
}

int main() {
    //freopen("SUBSEG.INP", "r", stdin);
    //freopen("SUBSEG.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << Prepair(n, k, arr) << endl;
}
