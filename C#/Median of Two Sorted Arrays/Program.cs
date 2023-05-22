using System;

/*
 * Solved: 05.15.2023
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, return * the median of the two sorted arrays.

* The overall run time complexity should be O(log (m+n)).
*/

public class Solution 
{
    public double FindMedianSortedArrays(int[] nums1, int[] nums2)
    {
        // Combine and sort two arrays
        int[] mergedArray = new int[nums1.Length + nums2.Length];

        nums1.CopyTo(mergedArray, 0);
        nums2.CopyTo(mergedArray, nums1.Length);

        Array.Sort(mergedArray);

        // Modify merged array to contain median
        if(mergedArray.Length % 2 == 0)
        {
            double middle = mergedArray[mergedArray.Length / 2] + mergedArray[(mergedArray.Length / 2) - 1];

            return middle / 2.0;
        }
        else
        {
            return mergedArray[mergedArray.Length / 2];
        }
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        int[] data1, data2, data3, data4;

        data1 = new int[] { 1, 3 };
        data2 = new int[] { 2 };
        data3 = new int[] { 1, 2 };
        data4 = new int[] { 3, 4 };

        string dataString1 = string.Join(", ", data1) + ", " + string.Join(", ", data2);
        string dataString2 = string.Join(", ", data3) + ", " + string.Join(", ", data4);

        Solution s = new Solution();

        Console.WriteLine($"Data 1: {dataString1} \n\t Result: {s.FindMedianSortedArrays(data1, data2)}");
        Console.WriteLine($"Data 2: {dataString2} \n\t Result: {s.FindMedianSortedArrays(data3, data4)}");
    }
}
