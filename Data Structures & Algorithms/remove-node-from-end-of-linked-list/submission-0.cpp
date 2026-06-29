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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = head;
        int count = 0;
        //size of LL
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        if (count == n) return head->next;

        ListNode *slow = head;
//        int node = count-n+1;
        for (int i = 0; i < count-n-1; i++) {
            slow = slow->next;
        }
        if (slow->next->next == nullptr) slow->next = nullptr;
        else {
            ListNode *next = slow->next->next;
            slow->next->next = nullptr;
            slow->next = next;
        }
        return head;        
    }
};