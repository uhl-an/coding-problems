/*
    Problem:
    :Given an array of integers nums and an integer target,
       return indices of the two numbers such that they add up to target.

    Constraints:
    :None

    Pseudo:
    :currentSum = 0
     for num in list
      for num2 in list
         currentSum = num + num2
         if currentSum is == target
            reutn num and num 2

    Experiments:
    :Experiment-1:
    :Iterating through a vector<int> and returning each number

    Reductions:
    :Reduction-1:
    :Return every possible sum between two numbers
*/

#include <vector>
#include <iostream>

// Solution: 15min. 21sec.
/*
    Problems:
    :a self-sum isn't valid
*/
std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::vector<int> indices = {};

    int currentSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            currentSum = nums[i] + nums[j];

            // a self-sum isn't valid
            if (j == i)
            {
                continue;
            }

            if (currentSum == target)
            {
                std::cout << nums[i] << " " << nums[j] << " " << i << " " << j << " " << target << std::endl;
                indices.push_back(i);
                indices.push_back(j);

                return indices;
            }
        }
    }

    return indices;
}

int main()
{
    std::vector<int> input = {3, 2, 4};

    std::vector<int> indices = twoSum(input, 6);

    std::cout << indices[0] << " " << indices[1];
}

// Reduction-1:
// #include <vector>
// #include <iostream>
// std::vector<int> convertNumsToSums(std::vector<int> nums)
// {
//     int currentSum;

//     std::vector<int> sums = {};

//     for (int &num1 : nums)
//     {
//         for (int &num2 : nums)
//         {
//             currentSum = num1 + num2;

//             sums.push_back(currentSum);
//         }
//     }

//     return sums;
// }

// int main()
// {
//     std::vector<int> nums = {8, 3, 5, 3, 1, 4};

//     std::vector<int> sums = convertNumsToSums(nums);

//     for (int numsIndex = 0; numsIndex < nums.size(); numsIndex++)
//     {
//         std::cout << "Sums of " << nums[numsIndex] << ": ";

//         for (int sumsIndex = numsIndex * nums.size(); sumsIndex < (numsIndex * nums.size()) + nums.size(); sumsIndex++)
//         {
//             std::cout << sums[sumsIndex] << " ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }

// Experiment-1:
// #include <vector>
// #include <iostream>

// int main()
// {
//     std::vector<int> numsList = {1, 2, 6, 7, 2, 9};

//     for (int i = 0; i < numsList.size(); i++)
//     {
//         std::cout << "Index " << i << ": " << numsList.at(i) << std::endl;
//     }

//     std::cout << "Finished!";

//     return 0;
// }