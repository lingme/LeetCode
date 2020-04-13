#include <iostream>

using namespace std;

class Solution {
public:
    int reverse1(int x) {
        int res = 0;
        while (x != 0) {
            if (abs(res) > INT_MAX / 10) return 0;
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
    }

    int reverse2(int x) {
        long res = 0;
        while (x != 0) {
            res = 10 * res + x % 10;
            x /= 10;
        }
        return (res > INT_MAX || res < INT_MIN) ? 0 : res;
    }
};

int main() {
    auto solution = new Solution();
    cout << solution->reverse2(1534236469) << endl;
    return 0;
}
