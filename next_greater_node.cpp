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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        stack<int>st;
        for(int i=ans.size()-1;i>=0;--i){
        while(!st.empty() && st.top()<=ans[i]){ 
        st.pop();
        }
        int temp=(st.empty())?0:st.top();
        st.push(ans[i]);
        ans[i]=temp;
        }
        return ans;
    }
};