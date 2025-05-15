class Solution
{
public:
    int getNext(int x)
    {
        int num = 0;
        while (x != 0)
        {
            int last = x % 10;
            x = x / 10;
            num += last * last;
        }
        return num;
    }
    bool isHappy(int n)
    {

        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast)
        {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};