#include <bits/stdc++.h>

using namespace std;

int main() {
    int N,M;

    ifstream input("BOICHUNG.INP");
    ofstream output("BOICHUNG.OUT"); 

    input >> N >> M;

    for (size_t i = 1; i <= N*M; i++) {
        if (i % N == 0 && i % M == 0)
            output << i << " ";
    }
}