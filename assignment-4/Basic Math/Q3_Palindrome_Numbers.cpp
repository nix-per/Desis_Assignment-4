class Solution
{
public:
    int isPallindrome(long long int N)
    {
        long long bi = 0, no = N;

        vector<int> v;

        while (no)
        {
            int c = no & 1;
            v.push_back(c);
            no = no >> 1;
        }
        for (int i = 0; i < v.size() / 2; i++)
        {
            if (v[i] != v[v.size() - 1 - i])
            {
                return 0;
            }
        }
        return 1;

        // ANOTHER WAY TO APPROACH THIS THROUGH NUMBERS:
        // for(int i=v.size()-1; i>=0; i--){
        //     bi = bi*10 + v[i];
        // }

        // int bicopy = bi, check = 0;

        // while(bi!=0){
        //     check = check*10 + bi%10;
        //     bi /= 10;
        // }
        // if(check == bicopy) return 1;
        // return 0;
    }
};