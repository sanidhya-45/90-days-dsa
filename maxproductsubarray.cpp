// Given an integer array nums, find a 
// subarray
//  that has the largest product, and return the product.


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr=1, curr2=1, maxpro=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            curr=curr*nums[i];
            curr2= curr2 *nums[nums.size()-i-1];
            maxpro= max(maxpro, max(curr,curr2));
            if(curr==0)  curr=1;
            if(curr2==0) curr2=1;
        }
        return maxpro;
    }
};