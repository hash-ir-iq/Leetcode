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
        if (head) {
            ListNode* slow = head;
            ListNode* fast = nullptr;
            if (head->next)
                fast = head->next;
            else
                return false;
            while (slow && fast) {
                if (slow == fast) {
                    return true;
                }
                slow = slow->next;
                if (fast->next && fast->next->next)
                    fast = fast->next->next;
                else
                    return false;
            }
            return false;
        } else {

            return false;
        }
    }
};