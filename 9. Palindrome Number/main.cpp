#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

    }

    bool isPalindrome1(int x) {
        auto x_string = to_string(x);
        int i = 0;
        while (i < x_string.size() / 2) {
            if (x_string[i] != x_string[x_string.size() - i - 1])
                break;
            i++;
        }
        return i == x_string.size() / 2 ? true : false;
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
