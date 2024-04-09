#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("CAPSO1.INP");
    ofstream output("CAPSO1.OUT");

    int n, x;
    input >> n >> x;

    int A[n];
    for (int i = 0; i < n; i++) {
        input >> A[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] + A[i + 1] == x) {
            count++;
        }
    }

    output << count;

    return 0;
}
