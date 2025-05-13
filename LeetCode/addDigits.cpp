class Solution
{
public:
    int addDigits(int num)
    {

        while (num >= 10)
        {
            int sum = 0;

            while (num != 0) // 38
            {
                int digit = num % 10; // 38 % 10 = 3.8 => 3.8 % 10
                sum += digit;         // sum = 8
                num = num / 10;       // num = 3.8
            }

            num = sum;
        }

        return num;
    }
};