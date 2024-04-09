#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    ifstream input("POS.INP");
    ofstream output("POS.OUT");

    int N;
    double X;

    input >> N >> X;

    vector<double> arr(N);

    double pos1 = 0.0, pos2 = 0.0;
    int pos3 = -1, pos4 = -1;

    for (int i = 0; i < N; i++) {
        input >> arr[i];

        if (arr[i] < 0 && pos1 == 0.0) {
            pos1 = arr[i];
        }

        if (arr[i] > 0) {
            pos2 = arr[i];
        }

        if (arr[i] == X) {
            if (pos3 == -1) {
                pos3 = i;
            } else {
                pos4 = i;
                break;
            }
        }
    }

    output << fixed << setprecision(2) << pos1 << " " << pos2 << endl;
    output << pos3 + 1 << " " << pos4 + 1 << endl;

    return 0;
}
