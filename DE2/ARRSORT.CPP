#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ifstream input("ARRSORT.INP");
    ofstream output("ARRSORT.OUT");

    int n;
    input >> n;

    double arr[n];
    for(int i = 0; i < n; i++) {
        input >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
        output << fixed << setprecision(2) << arr[i] << " ";
    }
    output << "\n";

    reverse(arr, arr + n);

    for(int i = 0; i < n; i++) {
        output << fixed << setprecision(2) << arr[i] << " ";
    }

    return 0;
}
