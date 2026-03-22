class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int z = 0;
        for (int i = 0; i < arr.size(); i++) 
            if (arr[i] == 0) z++;
        
        for (int i = arr.size() - 1; i >= 0; i--) {            
            if (arr[i] == 0) z--;
            if (i + z < arr.size()) { 
                arr[i + z] = arr[i];
                if (arr[i] == 0 && i + z + 1 < arr.size()) 
                    arr[i + z + 1] = 0;
            }
        }
    }
};