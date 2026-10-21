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
    ListNode* reverse(ListNode* temp){
        ListNode* prev = NULL;
        ListNode* curr = temp;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            
        }
        return prev;
    }
    ListNode* findKthNode(ListNode* temp, int k){
        k -= 1;
        while(temp != NULL && k > 0){
            temp = temp -> next;
            k--;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        ListNode* nextNode;
        while(temp != NULL){
            ListNode* kthNode = findKthNode(temp, k);

            if(kthNode == NULL){ 
            if(prevNode) prevNode -> next = temp;
            break;
            }
            nextNode = kthNode -> next;
            kthNode -> next = NULL;
            ListNode* Node = reverse(temp);

            if(temp == head)
            head = Node;
            else{
                prevNode -> next = Node;
            }
            prevNode = temp; 
            temp = nextNode;
        }
        return head;
    }
};