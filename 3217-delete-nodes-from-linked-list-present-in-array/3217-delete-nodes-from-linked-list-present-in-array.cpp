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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>mpp(nums.begin(), nums.end());
        
        ListNode* dummyNode = new ListNode(0);
        dummyNode -> next = head;

        ListNode* curr = dummyNode;

        while(curr -> next != NULL){
            if(mpp.find(curr -> next -> val) != mpp.end()){
                curr -> next = curr -> next -> next;
            }else{
                curr = curr -> next;
            }
        }
        ListNode* newHead = dummyNode -> next;
        return newHead;
    }
};