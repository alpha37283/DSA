class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e = 0;
        int o = 1; 
        int n = nums.size(); 

        while(e < n && o < n)
        {
            while(e < n && nums[e] % 2 == 0)
            {
                e += 2;
            }
            while(o < n && nums[o] % 2 != 0)
            {
                o += 2;
            }

            if(e < n && o < n)
            {
                swap(nums[e], nums[o]);
            }
        }

        return nums;
    }
};