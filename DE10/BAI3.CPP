#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(string temp) {
    ll sum = 0;
    for (char c : temp) {
        sum += c - '0';
    }
    return sum;
}

ll onenum(ll n) {
    while (to_string(n).length() > 1) {
        n = sum(to_string(n));
    }
    return n;
}

int main() {
    //freopen("BAI3.INP", "r", stdin);
    //freopen("BAI3.OUT", "w", stdout);
    ll n, k;
    cin >> n >> k;
    vector<ll> result;
    for (ll i = 0; i < n; ++i) {
        ll cache;
        cin >> cache;
        if (onenum(cache) == k) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }

    for (ll i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
}
