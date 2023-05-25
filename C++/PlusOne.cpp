#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

/**
 * Solved: 05.25.2023
 * You are given a large integer represented as an integer array digits, where  *   each digits[i] is the ith digit of the integer. The digits are ordered
 *   from most significant to least significant in left-to-right order. The
 *   large integer does not contain any leading 0's.
 * Increment the large integer by one and return the resulting array of digits.
 */
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int>& digits) 
    {
        for (int i{static_cast<int>(digits.size()) - 1}; i >= 0; i--)
        {
            if(digits.at(i) == 9)
            {
                digits.at(i) = 0;
                continue;
            }
            else
            {
                digits[i]++;
                break;
            }
        }

        if (digits.at(0) == 0)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

void printResults(const std::vector<int>& digits)
{
    std::copy(digits.begin(), digits.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}


int main()
{
    Solution s;

    // DataSets: 4;
    std::vector<int> digits{9, 9, 9, 9};
    std::vector<int> digits2{1, 2, 3, 4};
    std::vector<int> digits3{1, 2, 9, 9};
    std::vector<int> digits4{1, 9, 9, 9};

    // TestCases:
    std::vector<int> result = s.plusOne(digits);
    std::vector<int> result2 = s.plusOne(digits2);
    std::vector<int> result3 = s.plusOne(digits3);
    std::vector<int> result4 = s.plusOne(digits4);

    // Results:
    printResults(result);
    printResults(result2);
    printResults(result3);
    printResults(result4);
}