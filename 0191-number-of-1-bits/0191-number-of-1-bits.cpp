class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        for(int j=0,i=1;j <32;j++,i=i<<1)
        {
            if(n&i)
            {
                count++;
            }
        }
        return count;
    }
};