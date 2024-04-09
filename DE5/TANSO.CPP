#include <bits/stdc++.h>
#include <map>

using namespace std;

void TanSo(const vector<int>& arr) {
    ofstream out("TANSO.OUT");

    map<int, pair<int, int>> frequencyMap;

    for (int i = 0; i < arr.size(); i++) {
        int element = abs(arr[i]);
        if (frequencyMap.find(element) == frequencyMap.end()) {
            frequencyMap[element] = make_pair(1, i + 1);
        } else {
            frequencyMap[element].first++;
        }
    }

    for (const auto& pair : frequencyMap) {
        out << pair.first << " " << pair.second.first << endl;
    }
}

int main() {
    ifstream inp("TANSO.INP");
    int N;
    inp >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        inp >> arr[i];
    }

    TanSo(arr);
}
