class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int profit = 0;
        int mini = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            int cost = nums[i] - mini;
            profit = max(cost, profit);
            mini = min(mini, nums[i]);
        }

        return profit;
    }
};