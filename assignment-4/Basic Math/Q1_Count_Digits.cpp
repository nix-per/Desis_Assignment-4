class Solution
{
public:
    int evenlyDivides(int n)
    {
        int c = 0, no = n;
        while (n != 0)
        {
            int d = n % 10;
            if (d == 0)
            {
                n /= 10;
                continue;
            }
            if (no % d == 0)
            {
                c++;
            }
            n /= 10;
        }
        return c;
    }
};