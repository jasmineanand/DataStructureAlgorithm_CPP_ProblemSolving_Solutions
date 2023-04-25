class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int a = num % 10;
            sum += a;
            num = num / 10;
            if (num == 0 && sum > 9)
            {
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
};