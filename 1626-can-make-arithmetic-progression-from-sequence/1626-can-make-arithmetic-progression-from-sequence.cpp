class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        bool series=true;
        int diffence = arr[1]-arr[0];

        for(int i=0;i<arr.size()-1;i++)
        {
            if( arr[i] + diffence != arr[ i + 1 ])
            {
                return false;
            }
        }

        return true;


    }
};