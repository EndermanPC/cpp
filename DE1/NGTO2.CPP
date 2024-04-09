#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

bool NT(int a) {
    if (a == 2) return true;
    if (a <= 1 || a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a); i+=2)
        if (a % i == 0) return false;

    return true;
}

int tong(int a) {
    int s = 0;
    string b = to_string(a);
    for (int i = 0; i < b.length(); i++) {
        s += b[i] - '0';
    }
    return s;
}

int main () {
   ofstream output("NGTO2.OUT");
   ifstream input("NGTO2.INP");

    int a;

   input >> a;

   if (NT(tong(a))) output << "YES" << endl;
   else output << "NO" << endl;
}