int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 1){
       return 1;
    }
     int left = 1;
     int right = 1;
     while(right < numsSize){
        if(nums[right - 1] != nums[right]){
            nums[left] = nums[right];
            left++;
        }
        right++;
     }
     return left;
}
