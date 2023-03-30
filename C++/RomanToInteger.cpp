

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