class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int count =0;

        int i=1;
        for(;i!=0;i=i<<1)
        {
            if(a&i)
            {
                count++;
            }
        }
        return count;
    }
};