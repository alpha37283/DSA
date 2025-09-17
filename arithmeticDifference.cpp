class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        int total = 0;
        int l = 0;

        while (l + 2 < n) {
            int r = l + 1;
            int diff = nums[l+1] - nums[l];

            // expand while difference stays same
            while (r + 1 < n && nums[r+1] - nums[r] == diff) {
                r++;
            }

            int len = r - l + 1;
            if (len >= 3) {
                total += (len - 2) * (len - 1) / 2;
            }

            // reset window
            l = r;
        }

        return total;
    }
};
