#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int N, S;
    
    cin >> N >> S;
    
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), cmp);

    int files = 0;
    int currentSize = 0;

    for (int i = 0; i < N; i++) {
        if (currentSize + A[i] <= S) {
            currentSize += A[i];
            files++;
        } else {
            break;
        }
    }

    cout << files << endl;

    return 0;
}
