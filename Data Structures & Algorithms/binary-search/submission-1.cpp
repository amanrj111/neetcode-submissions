class Solution {
public:
    int search(vector<int>& nums, int target) {

        int s = 0;
        int end = nums.size();


        while(s <= end){

            int mid  = s + (e - s) / 2;
            
            if(nums[mid] == target) return mid;
            else if( nums[mid] < target) {
                s = mid+1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
        
    }
};
