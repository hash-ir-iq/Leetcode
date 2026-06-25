class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp(2*n);
        int mid = n;
        for(int i=0,j=0;i<2*n ;i = i+2,j++)
        {
            temp[i] = nums[j];
            temp[i+1]=nums[mid+j];
        }
        return temp;
        }
    
};