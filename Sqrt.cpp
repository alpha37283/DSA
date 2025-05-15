class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0;
        int r = x;
        int res = 0;
        int m = 0;
        while (l <= r)
        {
            m = l + ((r - l) / 2);

            if (x > 1LL * m * m)
            {
                res = m;
                l = m + 1;
            }
            else if (x < 1LL * m * m)
            {
                r = m - 1;
            }
            else
            {
                return m;
            }
        }

        return res;
    }
};
// unsigned curr;
// int ans;
// for(int i = 1; i<=x; i++)
// {
//     curr = 0;
//     curr = i * i;
//     if(curr > x)
//     {
//         ans = i - 1;
//         break;
//     }

// }

// return ans;