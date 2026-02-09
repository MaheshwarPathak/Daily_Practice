int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    
    int count=1;
    for(int i=1;i<numsSize;i++){
        for(int j=i-1;j<i;j++){ 
        if(nums[i]==nums[j]){
            continue;

        }
        else{
            nums[count]=nums[i];
            count++;
        }
    }
    }
    return count;
}