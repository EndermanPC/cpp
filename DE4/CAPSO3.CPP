#include <bits/stdc++.h>

using namespace std;

bool NT(int N) {
    if (N == 2) return true;
    if (N <= 1 || N % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(N); i+=2)
        if (N % i == 0) return false;

    return true;
}

int main() {
    ifstream input("CAPSO3.INP");
    ofstream output("CAPSO3.OUT");

    int N;
    input >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        input >> arr[i];
    } 

    int t = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (NT(arr[i] + arr[j])) {
                t++;
                break;
            }
        }
    }

    output << t;
}