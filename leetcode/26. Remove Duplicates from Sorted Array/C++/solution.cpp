#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 1){
       return 1;
    }
     int left = 1;
     int right = 1;
     while(right < nums.size()){
        if(nums[right - 1] != nums[right]){
            nums[left] = nums[right];
            left++;
        }
        right++;
     }
     return left;
    }
};
