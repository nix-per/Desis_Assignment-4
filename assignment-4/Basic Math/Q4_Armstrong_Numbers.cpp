class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int ncopy = n, sum = 0;

        while (n != 0)
        {
            int d = n % 10;
            sum += d * d * d;
            n /= 10;
        }

        if (sum == ncopy)
            return true;
        return false;
    }
};