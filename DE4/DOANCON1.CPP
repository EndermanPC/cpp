#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("DOANCON1.INP");
    ofstream output("DOANCON1.OUT");

    int N;

    input >> N;

    vector<int> arr(N);
    vector<int> marrlength;

    for (int i = 0; i < N; i++) {
        input >> arr[i];
    }

    int lengthx;

    for (int i = 0; i < N; i++) {
        lengthx = 1;
        for (int j = i; j < N-1; j++) {
            if (arr[j] < arr[j+1]) {
                lengthx++;
            }
            else break;
        }
        marrlength.push_back(lengthx);
    }

    int result = *max_element(marrlength.begin(), marrlength.end());

    output << result;
}