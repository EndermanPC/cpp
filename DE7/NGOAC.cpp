#include <iostream>
#include <stack>
#include <string>

using namespace std;

enum Tree {
    DUNG,
    KHONG_DUNG,
    KHONG_HOP_LE
};

Tree checker(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty() || st.top() != '(') {
                return KHONG_DUNG;
            }
            st.pop();
        }
    }

    return st.empty() ? DUNG : KHONG_DUNG;
}

Tree check2(const string& s) {
    int len = s.length();

    for (int i = 0; i < len; ++i) {
        if (s[i] != '(' && s[i] != ')') {
            return KHONG_HOP_LE;
        }
    }

    return checker(s);
}

int main() {
    freopen("NGOAC.INP", "r", stdin);
    freopen("NGOAC.OUT", "w", stdout);

    string s;
    getline(cin, s);

    Tree trangThai = check2(s);

    if (trangThai == DUNG) {
        cout << "DUNG" << endl;
    } else if (trangThai == KHONG_DUNG) {
        cout << "KHONG DUNG" << endl;
    } else {
        cout << "KHONG HOP LE" << endl;
    }

    return 0;
}
