lass Solution {
public:
    int findLucky(vector<int>& arr) {
         int fre[501]={0};
         for(int i=0;i<arr.size();i++){
            fre[arr[i]]++;
         }
         int result=-1;
         for(int i=1;i<501;i++){
            if(fre[i]==i){
                result=i;
            }
         }
         return result;
    }
};