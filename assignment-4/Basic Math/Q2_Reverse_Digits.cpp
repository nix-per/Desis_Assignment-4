class Solution
{
public:
    int reverseDigits(int n)
    {
        int rev = 0;
        while (n % 10 == 0)
        {
            n /= 10;
        }
        while (n != 0)
        {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }
};