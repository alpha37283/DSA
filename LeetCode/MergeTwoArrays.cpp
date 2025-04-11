class Solution
{
public:
    void sort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int c;
                    c = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = c;
                }
            }
        }
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int x = m;

        for (int i = 0; i < n; i++)
        {
            nums1[x] = nums2[i];
            x++;
        }

        sort(nums1);
    }
};