class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate=0;
        int size=nums.size();
        for(int num : nums)
        {
            if(count ==0)
            {
                candidate = num;
            }

            if(candidate==num)
            {
                count++;
            }
            else{
                count--;
            }

            if(count > size/2)
            {
                break;
            }

        }
        return candidate;
    }
};