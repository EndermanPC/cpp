#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int counting(char a) {
    int s = 0;
    for(char c = 'a'; c <= a; ++c) {
        s++;
    }
    return s;
}

int main() {
    //freopen("ALPHA.INP", "r", stdin);
    //freopen("ALPHA.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int loop = 0; loop < n; ++loop) {
        cin >> arr[loop];
    }

    for (int i = 0; i < n; ++i) {
       char max_char = *max_element(arr[i].begin(), arr[i].end());
       cout << counting(max_char) << endl;
    }
}
