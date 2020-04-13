#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *DetectCycle(ListNode *head) {
        auto *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow != fast) continue;
            fast = head;
            while (slow != fast)
            {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
        return nullptr;
    }
};

int main() {

    struct ListNode node1 = ListNode(1);
    struct ListNode node2 = ListNode(2);
    struct ListNode node3 = ListNode(3);
    struct ListNode node4 = ListNode(4);
    struct ListNode node5 = ListNode(5);
    struct ListNode node6 = ListNode(6);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    node6.next = &node2;

    auto solution = new Solution();
    auto find = solution->DetectCycle(&node1);

    cout << find->val << endl;

    return 0;
}