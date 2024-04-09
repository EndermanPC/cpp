#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ifstream input("MINMAX.INP");
    ofstream output("MINMAX.OUT");

    int n;
    input >> n;

    double numbers[n];
    for (int i = 0; i < n; i++) {
        input >> numbers[i];
    }

    double* min_num = min_element(numbers, numbers + n);
    double* max_num = max_element(numbers, numbers + n);

    output << fixed << setprecision(2) << *max_num << " ";
    output << fixed << setprecision(2) << *min_num << endl;

    return 0;
}