#include <bits/stdc++.h>
using namespace std;

string rutgon(int a, int b) {
    int x = __gcd(a, b);

    return to_string(a/x) + "/" + to_string(b/x);
}

int main() {
    int a,b;

    ifstream input("PSTOIGIAN.INP");
    ofstream output("PSTOIGIAN.OUT");

    input >> a >> b;
    
    output << rutgon(a,b) << endl;
}