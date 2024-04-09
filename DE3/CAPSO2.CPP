#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("CAPSO2.INP");
    ofstream output("CAPSO2.OUT");

    int n, x;
    input >> n >> x;

    int A[n];
    for (int i = 0; i < n; i++) {
        input >> A[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (A[i] + A[j] == x) {
                count++;
            }
        }
    }

    output << count;

    return 0;
}
