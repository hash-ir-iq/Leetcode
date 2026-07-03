class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0,j=0;
        char* s2 = new char[s.length()];
        for (; s[i] != '\0';i++) {
            if ( ( s[i] >= 97 && s[i] <= 122 ) || (s[i] >= 48 && s[i] <= 57)) {
                s2[j] = s[i];
                j++;
            }
            else if(s[i] >= 65 && s[i] <=90)
            {
                s2[j] = s[i] +32;
                j++;
            }
        }
        //s2[j]='\0';
        for(int p1 =0,p2=j-1;p1<=p2;p1++,p2--)
        {
            if( s2[p1]!= s2[p2] )
            {
                delete[] s2;
                return false;
            }
        }
        delete[] s2;   
        return true;
    }
};