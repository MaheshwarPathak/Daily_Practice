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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       int prevIdx = -1, firstIdx = -1;
       int index = 1;
       int minDist = INT_MAX;
       ListNode* prev = head;
       ListNode* curr = head -> next;
       while(curr != NULL && curr -> next != NULL){
        if((curr -> val > prev -> val && curr -> val > curr -> next -> val) ||
         (curr -> val < prev -> val && curr -> val < curr -> next -> val)){
                if(firstIdx == -1){
                    firstIdx = index;
                }
                if(prevIdx != -1){
                    minDist = min(minDist, index - prevIdx);
                }
                prevIdx = index;
         }
         prev = curr;
         curr = curr -> next;
         index ++;
       } 
       if(minDist == INT_MAX)
        return {-1, -1};
        int maxDist = prevIdx - firstIdx;
        return {minDist, maxDist};
    }
};