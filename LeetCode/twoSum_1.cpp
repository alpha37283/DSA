class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> ans;
        unordered_map<int, int> myNums;

        int diff;
        for (int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if (!(myNums.find(diff) != myNums.end()))
            {
                myNums[nums[i]] = i;
            }
            else
            {
                ans.push_back(i);
                ans.push_back(myNums[diff]);
            }
        }
        return ans;
    }
};