class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // 7654321 => 567 4321 =>
        k %= nums.size(); // k = 3 % 7 = 4
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};