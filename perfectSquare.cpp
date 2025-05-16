class Solution
{
public:
    bool isPerfectSquare(int num)
    {

        int l = 1;
        int r = num;
        int m;
        while (l <= r)
        {
            m = l + ((r - l) / 2);

            if (1LL * m * m > num)
            {
                // shift to left
                r = m - 1;
            }
            else if (1LL * m * m < num)
            {
                l = m + 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};
//     if( num <= 0)
//     {
//         return false;
//     }
//     while( num % 2 == 0)
//     {
//         num = num / 2;
//     }
//     if( num == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }