#include <iostream>
#include <vector>

/**
 * Solved: 03.30.22
 * Problem:
 * :Given an integer x, return true if x is a palindrome,
 *      and false otherwise.
 * Challenge:
 * :Without converting the integer to a string?
*/
class Solution 
{
public:
    Solution() {}

    bool isPalindrome(int x)
    {
        // because of unknown collection length use vector
        std::vector<int> digits;

        // while the current number hasn't been divided to 0,
        // mod the number to get a digit and add it to the list.
        // Self-divide by ten to remove the last digit.
        while(x != 0)
        {
            digits.push_back(x % 10);

            x /= 10;
        }


        // iterate through the digits until a pair of equidistant
        // digits do not match; if none are found, then it is a Palindrome
        for(int i = 0; i < (digits.size() / 2); i++)
        {
            if(digits.at(i) != digits.at((digits.size() - 1) - i)) return false;
        }

        return true;
    }
};

int main(int argc, char* argv[])
{
    Solution s;

    printf("100 is a Palindrome? %s \n", s.isPalindrome(100) ? "true" : "false");
    printf("101 is a Palindrome? %s \n", s.isPalindrome(101) ? "true" : "false"); 
    printf("154323451 is a Palindrome? %s \n", s.isPalindrome(154323451) ? "true" : "false"); 
    printf("15433451 is a Palindrome? %s \n", s.isPalindrome(15433451) ? "true" : "false");
    printf("1543345 is a Palindrome? %s \n", s.isPalindrome(1543345) ? "true" : "false");
    printf("154351 is a Palindrome? %s \n", s.isPalindrome(154351) ? "true" : "false"); 
    printf("11 is a Palindrome? %s \n", s.isPalindrome(11) ? "true" : "false"); 
    printf("1 is a Palindrome? %s \n", s.isPalindrome(1) ? "true" : "false"); 
    printf("50605 is a Palindrome? %s \n", s.isPalindrome(50605) ? "true" : "false");   
    
    return 0;
}