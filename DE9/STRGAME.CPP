#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string removeDuplicates(std::string str) {
    std::sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
    return str;
}

bool isLessThan(const std::string& A, const std::string& B) {
    int lenA = A.length();
    int lenB = B.length();
    int minLen = std::min(lenA, lenB);

    for (int i = 0; i < minLen; ++i) {
        if (A[i] < B[i]) {
            return true;
        } else if (A[i] > B[i]) {
            return false;
        }
    }

    if (lenA < lenB) {
        return true;
    }

    return false;
}

std::vector<std::string> divideString(std::string str, int k) {
    std::sort(str.begin(), str.end());

    std::vector<std::string> result(k);
    for (int i = 0; i < str.size(); ++i) {
        result[i % k] += str[i];
    }

    std::sort(result.begin(), result.end(), isLessThan);

    return result;
}

int main() {
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;

    std::vector<std::string> result = divideString(s, k);

    std::string result_string = "";

    for(const auto& str : result) {
        result_string += str;
    }

    result_string = removeDuplicates(result_string);

    std::cout << result_string << std::endl;

    return 0;
}
