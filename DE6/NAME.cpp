#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    freopen("NAME.INP", "r", stdin);
    freopen("NAME.OUT", "w", stdout);

    string s;
    getline(cin, s);

    stringstream iss(s);
    string word;

    while (iss >> word) {
        string newstring = "";
        newstring += toupper(word[0]);
        for (int i = 1; i < word.length(); ++i) {
            newstring += std::tolower(word[i]);
        }
        cout << newstring << " ";
    }

}


