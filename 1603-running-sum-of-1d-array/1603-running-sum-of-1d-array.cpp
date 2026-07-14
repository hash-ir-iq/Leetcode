class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans (size);
        int sum =0;
        for(int i=0;i<size;i++)
        {
            sum = sum + nums[i];
            ans[i] = sum;
        }
        return ans;
    }
};