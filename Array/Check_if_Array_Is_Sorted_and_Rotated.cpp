class Solution {
public:
    bool check(vector<int>& nums) {
        //1.  it's only one breaking point
        //2. the last element must be less then to first element
        /*
        int br_count = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]) br_count++;
            if(br_count > 1) return false;
        }
        if(br_count == 0) return true;
        return nums[0] >= nums[nums.size()-1] ? true : false;
        */
        int br_count = 0;
        for(int i=0; i<nums.size()-1; i++) if(nums[i] > nums[i+1]) br_count++;

        if(nums[nums.size()-1] > nums[0]) br_count++;

        return br_count > 1 ? false : true;
        
    }
};