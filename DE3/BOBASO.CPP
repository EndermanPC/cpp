#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream input("BOBASO.INP");
    ofstream output("BOBASO.OUT");

    int n;
    input >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        input >> A[i];
    }

    sort(A, A + n);

    int count = 0;
    int chuvilonnhat = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) { 
                if (A[i] + A[j] > A[k]) {
                    count++;
                    chuvilonnhat = max(chuvilonnhat, A[i] + A[j] + A[k]);
                }
            }
        }
    }

    output << count << " " << chuvilonnhat << endl;

    return 0;
}