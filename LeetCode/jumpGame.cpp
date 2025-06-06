class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int goal = nums.size() - 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] + i >= goal)
            {
                goal = i;
            }
        }

        if (goal == 0)
        {
            return true;
        }

        return false;
    }
};