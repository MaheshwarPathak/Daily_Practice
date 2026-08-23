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
    ListNode* findNthNode(ListNode* head, int n){
        for(int i = 1; i < n; i++){
            head = head -> next;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int len = 1;
        ListNode* tail = head;
        while(tail -> next != NULL){
            tail = tail -> next;
            len++;
        }

        if(k % len == 0) return head;
            k = k % len;
            tail -> next = head;

        ListNode* newLastNode = findNthNode(head, len - k);
        head = newLastNode -> next;
        newLastNode -> next = NULL;
        return head;
    }
};