class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int st=0, end=nums.size()-1;
      int empty;
      while(st<=end){
        if(target > nums[nums.size()-1]){
            return nums.size();
        }else if(target < nums[0]){
            return 0;
        }
        int mid = st+(end-st)/2;
        if(target==nums[mid]){
            return mid;
        }else if(target>nums[mid]){
            st = mid+1;
        }else if(target<nums[mid]){
            end =  mid-1;
        }else if(st==end){
            if(target!=nums[mid]){
                return mid;
            }
        }
      }
      return st;
    }
};