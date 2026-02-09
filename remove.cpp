int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            int temp=nums[i];
            nums[i]=nums[count];
            nums[count]=temp;
            count++;
        }
    }
    return count;
    
}