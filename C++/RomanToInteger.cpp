#include <string>
#include <iostream>

/**
 * Solved: 03.30.2023
 * Problem:
 * :Given a roman numeral, convert it to an integer.
*/
// Stores Roman Numeral conversions
enum Numerals : int
{
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000
};

class Solution 
{
public:

    // converts a given roman numeral character to it's
    //      decimal equivalent as an integer.
    // Returns -1 if it's not a roman numeral.
    int integerEquivalent(char romanNumeral)
    {
        switch(romanNumeral)
        {
            case 'I': return Numerals::I;
            case 'V': return Numerals::V;
            case 'X': return Numerals::X;
            case 'L': return Numerals::L;
            case 'C': return Numerals::C;
            case 'D': return Numerals::D;
            case 'M': return Numerals::M;
        }

        return -1;
    }

    // converts roman numeral to integer equivalent by
    //      reading the roman numeral string backward, adding
    //      or subtracting from the numeral sum as necessary.
    int romanToInt(std::string s)
    {
        // intializes the previous value to the decimal equivalent
        //       of the last roman numeral
        int prevValue = integerEquivalent(s.at(s.length() - 1));
        int numeralSum = prevValue;

        // starting from the second to last character in the string,
        //      iterate through the string converting each roman character
        //      to it's decimal equivalent; if the current roman numeral
        //      is less than the previous(signaling a subtraction) subtract
        //      the decimal value of the current numeral from the numeral sum;
        //      otherwise, add the decumal value of the current numeral to the
        //      numeral sum.
        for(int i = s.length() - 2; i >= 0; i--)
        {
            int currentValue = integerEquivalent(s.at(i));

            if(currentValue < prevValue) numeralSum -= currentValue;
            else numeralSum += currentValue;

            prevValue = currentValue;
        }

        return numeralSum;
    }
};

int main()
{
    Solution s;

    std::cout << "Roman Numeral to Integer Conversion----" << std::endl;
    std::cout << "III : " << s.romanToInt("III") << std::endl;
    std::cout << "IV : " << s.romanToInt("IV") << std::endl;
    std::cout << "LVIII : " << s.romanToInt("LVIII") << std::endl;
    std::cout << "MCMXCIV : " << s.romanToInt("MCMXCIV") << std::endl;

    return 0;
}