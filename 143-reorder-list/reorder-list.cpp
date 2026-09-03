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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow->next;
        slow->next = NULL;
        ListNode* next = NULL;
        ListNode* prev = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* q1 = head;
        ListNode* q2 = NULL;
        ListNode* p1 = prev;
        ListNode* p2 = NULL;

        while(q1 != NULL && p1 != NULL){
            q2 = q1->next;
            q1->next = p1;
            p2 = p1->next;

            p1->next = q2;
            q1 = q2;
            p1 = p2;
        }
    }
};