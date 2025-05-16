class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        //     int largest = nums[0];

        //     int sum1 = 0;
        //     for(int i = 0; i < nums.size(); i++)
        //     {
        //         largest = max(largest, nums[i]);
        //         sum1 += nums[i];
        //     }

        //     int sum2 = 0;
        //     for(int i = 1; i<= largest; i+=1)
        //     {
        //         sum2 += i;
        //     }

        //     return sum1 - sum2;

        // }

        int n = nums.size();
        int actualSum = 0;

        for (int i = 0; i < n; ++i)
        { // calculating the sum1
            actualSum += nums[i];
        }

        int expectedSum = n * (n + 1) / 2; // expected sum

        return expectedSum - actualSum;
    }
};