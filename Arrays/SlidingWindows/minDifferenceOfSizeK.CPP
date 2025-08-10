class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;
        
        sort(nums.begin(), nums.end()); 
        
        int i = 0;
        int j = k - 1;
        int diff = INT_MAX; 
        
        while (j < nums.size()) {
            int currDiff = nums[j] - nums[i]; 
            diff = min(diff, currDiff);
            i++;
            j++;
        }
        
        return diff; 
    }
};
