#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <algorithm>

class Solution
{
    public:
        int longestSquareStreak(std::vector<int>& nums)
        {
            
        };        

        int* findSquares(std::vector<int> nums)
        {
            int prime = 1;

            std::vector<int> primes = nums;  

            removeComposites(primes);          

            for()
            {
                
            }
        };

        void removeComposites(std::vector<int>& nums)
        {
            for(int i : nums)
            {
                if(fmod(sqrt(i), 1.0) == 0)
                {
                    nums.push_back(i);
                }
            }
        }
};

class Experiment
{
    private:

    public:
        int[] findSquares(std::vector<int> nums)
        {

        };

};

int main()

    return 0;
};