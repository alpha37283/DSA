class Solution
{
public:
    int minimumSum(int num)
    {
        string number = to_string(num);
        sort(number.begin(), number.end());

        int a = number[0] - '0';
        int b = number[1] - '0';
        int c = number[2] - '0';
        int d = number[3] - '0';

        int new1 = 10 * a + c;
        int new2 = 10 * b + d;
        return new1 + new2;
    }
};