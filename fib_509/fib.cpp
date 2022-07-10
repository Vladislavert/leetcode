class Solution
{
public:
    int fib(int n)
    {
		int ret = 0;
		int pastNumber = 0;
		int currentNumber = 1;

		if (n == 0)
			return 0;
		// else if (n == 1)
		// 	return (1);
		else
		{
			while(n-1)
			{
				ret = pastNumber + currentNumber;
				pastNumber = currentNumber;
				currentNumber = ret;
				n--;
			}
			return (currentNumber);
		}
    }
};
