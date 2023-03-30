#include <string>
#include <vector>
#include <iostream>

/**
 * Solved: 03.30.2023
 * Problem:
 * :Write a function to find the longest common prefix string amongst an array of strings.
 *      If there is no common prefix, return an empty string "".
*/
class Solution
{
public:
    // finds the longest common prefix by incrementally concatenating characters
    //      until an an uncommon character is encountered
    std::string longestCommonPrefix(std::vector<std::string>& strs)
    {
        std::string longestCommonPrefix = "";

        // take the first string and for every character
        //      compare it to the character in the same position
        //      of every other word; if the current character
        //      is equal to the character in the same position
        //      of every other word, append it to the returning string, 
        //      otherwise, return the current running prefix.
        for(int i = 0; i < strs.at(0).length(); i++)
        {
            for(int j = 0; j < strs.size(); j++)
            {
                if(i >= strs.at(j).length()) return longestCommonPrefix;
                else if(strs.at(0).at(i) != strs.at(j).at(i)) return longestCommonPrefix;
                else if(j == strs.size() - 1) longestCommonPrefix += strs.at(0).at(i);
            }
        }

        return longestCommonPrefix;        
    }
};