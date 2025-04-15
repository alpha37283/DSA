class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        // create a new array with all values of 1
        vector<int> res(n, 1);
        // prefix = 1
        int prefix = 1;
        // store each prefix in res
        for (int i = 0; i < n; i++)
        {
            // generate new prefix
            res[i] = prefix;
            prefix = prefix * nums[i];
        }

        int postfix = 1;
        // multiply postfix with each of res element
        for (int i = n - 1; i >= 0; i--)
        {
            // generate new postfix
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};