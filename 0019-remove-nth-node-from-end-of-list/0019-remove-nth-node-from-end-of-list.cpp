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
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            cnt++;
        }
        if(cnt == n){
            ListNode* delNode = head;
            head = head -> next;
            delete delNode;
            return head;
        }
        temp = head;
        int k = cnt - n;
        for(int i = 0; i < k - 1; i++){
            temp = temp -> next;
        }
        ListNode* delNode = temp -> next;
        temp -> next = temp -> next -> next;
        delete delNode;

        return head;
    }
};