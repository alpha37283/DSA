class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int prevSum = nums[0] + nums[1] + nums[2]; // Initialize to first valid triplet

        for (int i = 0; i < nums.size() - 2; i++) {

            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int j = i + 1, k = nums.size() - 1;

            while (j < k) {
                int currSum = nums[i] + nums[j] + nums[k];

                if (abs(currSum - target) < abs(prevSum - target)) {
                    prevSum = currSum;
                }

                if (currSum < target) {
                    j++;
                } else {
                    k--;
                }
            }
            while(nums[j] == nums[j - 1])
            {
                continue;
            }
        }

        return prevSum;
    }
};
