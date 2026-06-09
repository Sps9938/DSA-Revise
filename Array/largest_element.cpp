#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int largestElement(vector<int>& nums){
            int maxi = INT_MIN;
            for(int i=0; i<nums.size(); i++){
                maxi = max(maxi, nums[i]);
            }
            return maxi;
        }
};

int main(){
    Solution s1;
    vector<int> nums = {3, 3, 6, 1};
    cout<<"The Largest Element is: "<<s1.largestElement(nums);
    cout<<endl;

    return 0;
}