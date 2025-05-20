class Solution
{
public:
    bool isPrime(int x)
    {
        if (x < 2)
        {
            return false;
        }
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    bool isThree(int n)
    {
        // if n is square of primes then its there are three divisors
        for (int i = 2; i <= n; i++)
        {
            // condition for primes
            if (n == i * i && isPrime(i))
            {
                return true;
            }
        }

        return false;
    }
};