class Solution
{
public:
    int findGCD(vector<int> &nums)
    {

        int smallest = nums[0];
        int largest = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
        }

        int r;

        while (smallest != 0)
        {
            int r = largest % smallest;
            largest = smallest;
            smallest = r;
        }

        return largest;
    }
};

// int small(vector<int> nums)
// {
//     int small = nums[0];
//     for(int i = 0; i<nums.size(); i++)
//     {
//         if(nums[i] < small)
//         {
//             small = nums[i];
//         }
//         else
//         {
//             continue;
//         }
//     }
//     return small;
// }

// int large(vector<int> nums)
// {
//      int large = nums[0];
//     for(int i = 0; i<nums.size(); i++)
//     {
//         if(nums[i] > large)
//         {
//             large = nums[i];
//         }
//         else
//         {
//             continue;
//         }
//     }
//     return large;
// }