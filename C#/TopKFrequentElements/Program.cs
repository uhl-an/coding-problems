using System;
using System.Linq;
using System.Collections.Generic;

class Solution
{
    // Returns the top k frequent elements in an array
    public int[] solve(int[] nums, int k) 
    {
        SortedList<int, int> freq = new SortedList<int, int>();

        foreach(int i in nums)
        {
            if(freq.ContainsKey(i))
            {
                freq[i]++;
            }
            else
            {
                freq.Add(i, 1);
            }
        }

        IOrderedEnumerable<KeyValuePair<int, int>> freqQuery = freq.OrderByDescending(x => x.Value);

        int[] result = new int[k];

        int index = 0;
        foreach(var item in freqQuery)
        {
            if(index == k)
            {
                break;
            }
            result[index] = item.Key;
            index++;
        }

        return result;
    }
}

class Program
{
    static void Main(string[] args)
    {
        Solution sol = new Solution();
        int[] nums = new int[] { 1, 1, 1, 2, 2, 3 };
        int k = 2;
        int[] result = sol.solve(nums, k);
        Console.WriteLine(string.Join(", ", result));
    }
}
