/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return 0;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast) {
            slow = slow->next;
            fast = fast->next;
            if (fast) {
                fast = fast->next;
            }
            if (slow == fast) {
                return 1;
            }
        }
        return 0;
    }
};