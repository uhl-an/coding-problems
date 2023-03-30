#include <iostream>
#include <vector>

/**
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
        std::vector<int> digits;

        while(x != 0)
        {
            digits.push_back(x % 10);

            x /= 10;
        }

        if(digits.size() % 2 != 0)
        {
            for(int i = 0; i < digits.size() / 2; i++)
            {
                std::cout << digits.at(i) << " " << digits.at((digits.size() - 1) - i) << std::endl;

                if(digits.at(i) != digits.at((digits.size() - 1) - i)) return false;
            }
        }
        else
        {
            for(int i = 0; i < (digits.size() / 2); i++)
            {
                std::cout << digits.at(i) << " " << digits.at((digits.size() - 1) - i) << std::endl;

                if(digits.at(i) != digits.at((digits.size() - 1) - i)) return false;
            }
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
    printf("15433451 is a Palindrome? %s \n", s.isPalindrome(154323451) ? "true" : "false");
    printf("1543451 is a Palindrome? %s \n", s.isPalindrome(154323451) ? "true" : "false"); 
    printf("11 is a Palindrome? %s \n", s.isPalindrome(11) ? "true" : "false"); 
    printf("1 is a Palindrome? %s \n", s.isPalindrome(1) ? "true" : "false"); 
    printf("50605 is a Palindrome? %s \n", s.isPalindrome(50605) ? "true" : "false");   
    
    return 0;
}