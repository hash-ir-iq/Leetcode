class Solution {
public:
    bool isPalindrome(int x) {
        long  reverse=0;
    int temp=x;
        for(int i=10;x>=1;x = x/i)
        {
            reverse = reverse * i + ( x % i );
        }

        if(temp ==reverse){
            return true;
        }
        else 
            {
                return false;
            }
        }
};