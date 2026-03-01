class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>v;
        map<string,int>cnt;
        int sum=INT_MAX;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                   sum=min(sum,i+j);
                }
            }
        }
        if(sum==INT_MAX) return v;
        for(int i=0;i<list1.size();i++){
            cnt[list1[i]]++;
            if(cnt[list1[i]]==1){
                for(int j=0;j<list2.size();j++){
                    if(list1[i]==list2[j]&&i+j==sum){
                        v.push_back(list1[i]);
                        break;
                    }
                }
            }
        }
        return v;
    }
};