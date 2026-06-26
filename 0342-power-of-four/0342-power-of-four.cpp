class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>=1)
       {
       if(!(n & (n-1))) 
       {
            if(n%3==1)
            {
                return true;
            }
       }
            }
             return false;
       }
};