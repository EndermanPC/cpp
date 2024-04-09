#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    //setup for the var
    int M, N;
    cin >> M >> N;

    vector<vector<int>> arr(M, vector<int>(N));
    vector<int> temp;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
            temp.push_back(arr[i][j]);
        }
    }

    // sort the vector
    sort(temp.begin(), temp.end());

    // setup to display it
    int top = 0, bottom = M - 1, left = 0, right = N - 1;
    int index = 0;

    // display the vector as the topic
    while (true) {
        if (left > right) {
            break;
        }

        for (int i = left; i <= right; i++) {
            arr[top][i] = temp[index++];
        }
        top++;

        if (top > bottom) {
            break;
        }

        for (int i = top; i <= bottom; i++) {
            arr[i][right] = temp[index++];
        }
        right--;

        if (left > right) {
            break;
        }

        for (int i = right; i >= left; i--) {
            arr[bottom][i] = temp[index++];
        }
        bottom--;

        if (top > bottom) {
            break;
        }

        for (int i = bottom; i >= top; i--) {
            arr[i][left] = temp[index++];
        }
        left++;
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // DONEEEEEEEEEE!
    return 0;
}

