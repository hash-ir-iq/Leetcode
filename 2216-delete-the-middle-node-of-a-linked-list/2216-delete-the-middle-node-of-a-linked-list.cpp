/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        if (head) {
            ListNode* temp = head;
            while (temp) {
                count++;
                temp = temp->next;
            }

            count = count / 2;
            temp = head;
            if (count == 0) {
               // delete temp;
                head =0;
                return head;
            }
            for (int i = 0; i <= count; i++, temp = temp->next) {
                if (i + 1 == count) {
                    ListNode* toDelete = temp->next;
                    temp->next = temp->next->next;
                    //delete toDelete;
                    break;
                }
            }
            return head;
        }
        return head;
    }
};