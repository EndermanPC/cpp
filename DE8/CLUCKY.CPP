#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool scp(int n){
	return (sqrt(n)*sqrt(n) == n);
}

int main() {
    //freopen("CLUCKY.INP", "r", stdin);
    //freopen("CLUCKY.OUT", "w", stdout);

    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int s = 1;
    for (int i = 0; i < N; ++i) {
        s *= arr[i];
        if (scp(s))
            cout << "DA\n";
        else cout << "NE\n";
    }
}
