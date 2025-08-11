class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long sum = 0, ans = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            // if duplicate, shrink from the left
            while (st.count(nums[j])) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            st.insert(nums[j]);
            sum += nums[j];

            // shrink if window is bigger than k
            if (j - i + 1 > k) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            // if window is exactly k, check the sum
            if (j - i + 1 == k) {
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
