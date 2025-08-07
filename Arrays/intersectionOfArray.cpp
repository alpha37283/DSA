class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans; 

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        // 4 5 9     4 4 8 9 9 

        int lastElem = INT_MIN; 

        int i = 0;
        int j = 0; 

        while(i < nums1.size() && j  < nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                if(nums1[i] != lastElem)
                {
                ans.push_back(nums1[i]);
                lastElem = nums1[i]; 
                }
            i++;
            j++; 
        }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return ans; 

   
    }
};