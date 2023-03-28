/*
    Problem:
    :Given an array arr of positive integers sorted in a strictly
        increasing order, and an integer k.
        Return the kth positive integer that
        is missing from this array.

    :Restatements:
    ::Given an array of sorted increasing integers and a number "k",
        of the positive integers missing from the array, find and return the
        missing integer in the kth position.

    Constraints:
    :1 <= arr.length <= 1000
    :1 <= arr[i] <= 1000
    :1 <= k <= 1000
    :arr[i] < arr[j] for 1 <= i < j <= arr.length

    Pseudo:
    Experiments:

    Reductions:
    :Reduction-1:
    ::Return the array of all missing positive integers
        in an increasingly sorted order
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

class Solution
{
public:
    int findKthPositive(std::vector<int> &arr, int k)
    {
    }
};

class Reduction
{
private:
    std::vector<int> dataSet1 = {2, 3, 4, 7, 11};
    std::vector<int> dataSet2 = {1, 2, 3, 4};

    void printDataSet(char title[], std::vector<int> &data)
    {
        std::cout << title << ": ";

        std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, " "));

        std::cout << std::endl;
    }

public:
    std::vector<int> getMissingPositiveIntegers(std::vector<int> &arr)
    {
        std::vector<int> 
        
    }

    std::vector<int> getData()
    {
        int selection = 1;

        std::cout << "Select a dataset:" << std::endl;

        printDataSet("DataSet 1", dataSet1);
        printDataSet("DataSet 2", dataSet2);

        std::cout << std::endl << ": ";

        std::cin >> selection;

        return selection == 2 ? dataSet2 : dataSet1;
    }
};