class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int size = words.size();
        vector<int> answer (size);
        int count =0;
        for (int i=0;i<size;i++){
            int j=0;
            while(words[i][j] != '\0'){
                if(words[i][j]==x){
                    answer[count]= i;
                    count++;break;
                }
                j++;
            }
        }
        answer.resize(count);
        return answer;
    }
};