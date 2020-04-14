#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        auto x_string = to_string(x);
    }
};

int main() {
    auto solution = new Solution();
    cout << solution->isPalindrome(100) << endl;
    cout << solution->isPalindrome(101) << endl;
    cout << solution->isPalindrome(1034) << endl;
    cout << solution->isPalindrome(1003001) << endl;
    cout << solution->isPalindrome(100003030001) << endl;
    return 0;
}
