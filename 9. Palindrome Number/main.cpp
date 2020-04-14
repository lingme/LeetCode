#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int d = static_cast<int>(log10(x) + 1);
        int t = pow(10, d - 1);
        for (int i = 0; i < d / 2; ++i) {
            if (x / t != x % 10) return false;
            x = (x - x / t * t) / 10;
            t /= 100;
        }
        return true;
    }

    bool isPalindrome1(int x) {
        auto x_string = to_string(x);
        int i = 0;
        while (i < x_string.size() / 2) {
            if (x_string[i] != x_string[x_string.size() - i - 1])
                break;
            i++;
        }
        return i == x_string.size() / 2;
    }

    bool isPalindrome2(int x) {
        string s = to_string(x);
        return s == string(rbegin(s), rend(s));
    }
};

int main() {
    auto solution = new Solution();
    cout << solution->isPalindrome(100) << endl;
    cout << solution->isPalindrome(-101) << endl;
    cout << solution->isPalindrome(1034) << endl;
    cout << solution->isPalindrome(1003001) << endl;
    cout << solution->isPalindrome(100303001) << endl;
    return 0;
}
