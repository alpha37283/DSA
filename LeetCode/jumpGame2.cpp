class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int res = 0;
        int l = 0;
        int r = 0;
        int farthest;
        while (r < nums.size() - 1)
        {
            farthest = 0;
            for (int i = l; i < r + 1; i++)
            {
                farthest = max(farthest, nums[i] + i);
            }

            r = farthest;
            l += 1;
            res += 1;
        }

        return res;
    }
};