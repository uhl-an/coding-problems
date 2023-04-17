#include <iostream>
#include <string>
#include <vector>

/**
 * Problem: NOT SOLVED
 * :Given a string s, return the longest palindromic substring in s.
 * 
*/
class Solution
{
public:
    std::vector<int> indexesOfMatchingChar(char c, std::string s)
    {
        std::vector<int> indexes;

        for(size_t i {s.length() - 1}; i > 0; i--)
        {
            if(s.at(i) == c) indexes.push_back(i);
        }

        return indexes;
    }

    bool isPalindromic(std::string s)
    {
        for(size_t i {0}; i < s.length() / 2; i++)
        {
            if(s.at(i) != s.at((s.length() - i) - 1)) return false;
        }

        return true;
    }

    std::string longestPalindrome(std::string s) 
    {
        int currGreatestLength = 0;
        std::string longestSubstring = s.substr(0, 1);
        std::vector<std::string> palindromicSubstrings;

        while(s.length() != 0)
        {
            std::vector<int> endIndexes = indexesOfMatchingChar(s.at(0), s);
            for(auto index : endIndexes)
            {
                std::string possiblePalindromic = s.substr(0, index + 1);

                if(isPalindromic(possiblePalindromic))
                {
                    palindromicSubstrings.push_back(possiblePalindromic);

                    if(possiblePalindromic.length() > currGreatestLength)
                    {
                        currGreatestLength = possiblePalindromic.length();
                        longestSubstring = possiblePalindromic;
                    }
                }
            }

            s.erase(0, 1);
        }

        return longestSubstring;        
    }
};

void output(Solution s, std::string data) { std::cout << data << ": " << s.longestPalindrome(data) << std::endl; }

int main()
{
    Solution s;
    std::string data = "babad";
    
    output(s, "babad");
    output(s, "cbbd");
    output(s, "a");

    return 0;
}