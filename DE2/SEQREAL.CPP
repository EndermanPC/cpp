#include <bits/stdc++.h>
using namespace std;

double tong(double arr[], int arrlen) {
    double s = 0;
    for (int i = 0; i < arrlen; i++)
        s+=arr[i];
    return s;
}

double tongam(double arr[], int arrlen) {
    double s = 0;
    for (int i = 0; i < arrlen; i++)
        if (arr[i] < 0)
            s+=arr[i];
    return s;
}

double tongduong(double arr[], int arrlen) {
    double s = 0;
    for (int i = 0; i < arrlen; i++)
        if (arr[i] >= 0)
            s+=arr[i];
    return s;
}

double tongchan(double arr[], int arrlen) {
    double s = 0;
    for (int i = 0; i < arrlen; i++)
        if (int(arr[i]) % 2 == 0)
            s+=arr[i];
    return s;
}

double tongle(double arr[], int arrlen) {
    double s = 0;
    for (int i = 0; i < arrlen; i++)
        if (int(arr[i]) % 2 != 0)
            s+=arr[i];
    return s;
}

int main() {
    ifstream input ("SEQREAL.INP");
    ofstream output ("SEQREAL.OUT");
    double arr[100000];
    int N;
    input >> N;
    for (int i = 0; i < N; i++)
        input >> arr[i];

    output << fixed << setprecision(2) << tong(arr, N) << " " << tongam(arr, N) << " " << tongduong(arr, N) << " " << tongchan(arr, N) << " " << tongle(arr, N) << endl;
    return 0;
}
