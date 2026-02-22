class Solution {
public:
    int pivotInteger(int n) {
        
        int sum=n;
        

        for(int i=n;i>=0;i--)
        {
            int sumi = i * (i + 1 ) / 2;
            if(i!=n)
            {
                sum = sum + i;
            }
            if(sumi ==  sum )
            {
                
                return i;
                break;
            }
        }
        return -1;
    }
};