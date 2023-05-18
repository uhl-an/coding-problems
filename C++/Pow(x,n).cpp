/**
 * Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
*/
#include <iostream>

class Solution
{
private:
    double round_to(double value, double precision)
    {
        return std::round(value / precision) * precision;
    }

public:
    Solution() {}

    double pow(double x, int n)
    {
        if(n == 0)
        {
            return 1;
        }
        else if(n == 1)
        {
            return round_to(x, 0.001);
        }
        else if(n == -1)
        {
            return round_to(1 / x, 0.001);
        }
        else if(n % 2 == 0)
        {
            return pow(x * x, n / 2);
        }
        else
        {
            return pow(x * x, n / 2) * x;
        }
    }
};

int main()
{
    Solution s;

    std::cout << s.pow(2, 10) << std::endl;
    std::cout << s.pow(2.1, 3) << std::endl;
    std::cout << s.pow(2, -2) << std::endl;

    return 0;
}