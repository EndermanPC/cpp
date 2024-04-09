#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_Prime(int a) {
    if (a == 2) return true;
    if (a <= 1 || a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a); i+=2)
        if (a % i == 0) return false;

    return true;
}

int Overloader(vector<int> arr, int e) {
    int com = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int k = 1; i + e * k <= n; ++k) {            
            int S = 1;
            for (int sumLoop = 0; sumLoop < e * k; ++sumLoop) {
                S *= arr[i + sumLoop];
            }
            if (is_Prime(S)) {
                ++com;
            }
        }
    }
    return com;
}

int main() {
    int testCaseNumber = 0;
    cin >> testCaseNumber;

    for (int loop = 0; loop < testCaseNumber; loop++) {
        int n, e;
        cin >> n >> e;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        cout << Overloader(arr, e) << endl;
    }
    
    return 0;
}