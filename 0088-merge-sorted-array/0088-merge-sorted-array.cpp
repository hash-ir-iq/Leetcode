class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = n - 1;
        int i = m - 1;
        int k = m + n-1;

        for (; i >= 0 || j >= 0;) {
            if (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    // i wale ko end per bhejna and k and i ka decrement
                    nums1[k] = nums1[i];
                    i--;
                    k--;
                } else {
                    nums1[k] = nums2[j];
                    j--;
                    k--;
                }
            }
            else
            {
                if(i>=0)
                {
                    nums1[k] = nums1[i];
                    i--;
                    k--;
                }
                else
                {
                    nums1[k] = nums2[j];
                    j--;
                    k--;

                }
            }
        }
    }
};