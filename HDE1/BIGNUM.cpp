#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int countPairs(vector<int> A, int e) {
    int n = A.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = A[i] * A[j];
            if ((j - i) % e == 0 && isPrime(product)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    vector<int> result;
    while (T--) {
        int N, e;
        cin >> N >> e;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        result.push_back(countPairs(A, e));
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
    return 0;
}
