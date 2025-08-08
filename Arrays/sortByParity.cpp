class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums;
        }

        int l = 0; 
        int p = 0; 
        while( l < nums.size())
        {
            if(nums[l] % 2 == 0)
            {
                swap(nums[p],nums[l]); 
                p++;
                l++; 
            }
            else
            {
                l++;
            }
        }

    return nums; 
    }
};
