class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int size1= s.length();
        int size2= t.length();

        if(size1!= size2)
        {
            return false;
        }
        int frequency1[26]={0};
        int frequency2[26]={0};
        for(int i=0;i<size1;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                frequency1[s[i]-'A']++; 
            }
            else if(s[i]>=90 && s[i]<=122)
            {
                frequency1[s[i]-'a']++; 
            }

            if(t[i]>=65 && t[i]<=90)
            {
                frequency2[t[i]-'A']++; 
            }
            else if(t[i]>=90 && t[i]<=122)
            {
                frequency2[t[i]-'a']++; 
            }

        }

        for(int i =0;i<26;i++)
        {
            if(frequency1[i]!= frequency2[i])
            {
                return false;
            }
        }

        return true;
    }
};