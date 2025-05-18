class Solution
{
public:
    int arrangeCoins(int n)
    {
        int l = 0;
        int r = n;

        long long mid;
        long long curr;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            curr = (mid * (mid + 1)) / 2;

            if (n == curr)
            {
                return mid;
            }
            else if (curr > n)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return r;
    }
};