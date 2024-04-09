#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    //freopen("ACTIVITY.INP", "r", stdin);
    //freopen("ACTIVITY.OUT", "w", stdout);

    int n, x;

    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int count = 0;

    int i = 0, j = n - 1;

    while (i <= j) {
        count++;
        if (arr[i] + arr[j] <= x) {
            i++;
            j--;
        } else {
            j--;
        }
    }

    cout << count << endl;
}
