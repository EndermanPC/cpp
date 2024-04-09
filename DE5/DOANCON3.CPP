#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("DOANCON3.INP");
    ofstream output("DOANCON3.OUT");

    int N;

    input >> N;

    vector<int> arr(N);
    vector<int> marr;

    for (int i = 0; i < N; i++) {
        input >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        int s = 0;
        for (int j = i; j < N; j++) {
            s += arr[j];
            marr.push_back(s);
        }
    }

    output << *max_element(marr.begin(), marr.end());
}