#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("DOANCON2.INP");
    ofstream output("DOANCON2.OUT");

    int N;

    input >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        input >> arr[i];
    }

    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < N - 1; i++) {
        if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0)) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }

    maxLength = max(maxLength, currentLength);

    output << maxLength + 1;
}
