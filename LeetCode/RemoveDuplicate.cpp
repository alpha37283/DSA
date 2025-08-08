#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[j] = nums[i + 1];
                j += 1;
            }
        }

        return j;
    }
};
int main()
{

    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
    int newLength = sol.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
}