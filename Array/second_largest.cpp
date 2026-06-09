#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int largestElement(vector<int>& nums){
            int maxi_first = INT_MIN;
            int maxi_second = INT_MIN;
            for(int i=0; i<nums.size(); i++){
                int curr_element = nums[i];
                if(curr_element > maxi_first){
                    maxi_second = maxi_first;
                    maxi_first = curr_element;
                }
                else if(curr_element != maxi_first)
                    maxi_second = max(maxi_second, curr_element);
            }
            return maxi_second;
        }
};

int main(){
    Solution s1;
    // vector<int> nums = {3, 3, 6, 1
    vector<int> nums = {10, 7, 8, 9, 15};
    cout<<"The Second Largest Element is: "<<s1.largestElement(nums);
    cout<<endl;

    return 0;
}