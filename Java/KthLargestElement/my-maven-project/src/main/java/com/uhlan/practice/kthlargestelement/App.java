package com.uhlan.practice.kthlargestelement;
import java.util.Arrays;

class KthLargest
{
    private int k;
    private int[] nums;

    public KthLargest(int k, int[] nums)
    {
        this.k = k;
        this.nums = nums;
        Arrays.sort(nums);
    }

    public int Add(int val)
    {
        int[] newNums = new int[nums.length + 1];
        boolean inserted = false;
        for(int i = 0; i < newNums.length; i++)
        {
            if(inserted)
            {
                newNums[i] = nums[i - 1];
            }
            else
            {
                if(nums.length == 0 || i == nums.length || val < nums[i])
                {
                    newNums[i] = val;
                    inserted = true;
                }
                else
                {
                    newNums[i] = nums[i];
                }
            }
        }

        nums = newNums;

        return nums.length > k ? nums[nums.length - k] : nums[0];
    }
}

public class App 
{
    public static void main( String[] args )
    {
        int[] nums = {4, 5, 8, 2};
        KthLargest kthLargest = new KthLargest(3, nums);
        System.out.println(kthLargest.Add(3));   // returns 4
        System.out.println(kthLargest.Add(5));   // returns 5
        System.out.println(kthLargest.Add(10));  // returns 5
        System.out.println(kthLargest.Add(9));   // returns 8
        System.out.println(kthLargest.Add(4)); // returns 8
        
        // data: [[1,[]],[-3],[-2],[-4],[0],[4]]
        int[] nums2 = {};
        KthLargest kthLargest2 = new KthLargest(1, nums2);
        System.out.println(kthLargest2.Add(-3)); // returns -3
        System.out.println(kthLargest2.Add(-2)); // returns -2
        System.out.println(kthLargest2.Add(-4)); // returns -2
        System.out.println(kthLargest2.Add(0)); // returns 0
        System.out.println(kthLargest2.Add(4)); // returns 4
    }
}
