import java.util.Arrays;

/**
 * Problem:
 * :Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add
 * up to target.
 * 
 * Constraints:
 * :Each input has one solution
 * :You may noy use the same element twice
 * :The answer can be returned in any order
 * 
 * Want:
 * :The indices that sum to the target as an array
 * 
 * Pseudo:
 * :Iterate through the array
 * :subtract each number from the target
 * :iterate through the array again looking for the difference
 * :if the difference is not found, move to the next index
 * :repeat until a matching difference is found
 */
public class TwoSum {
    public static void main(String[] args) {
        int[] data1 = { 2, 7, 11, 15 };
        int[] data2 = { 3, 2, 4 };

        int target1 = 9;
        int target2 = 6;

        System.out.println(Arrays.toString(twoSum(data1, target1)));
        System.out.println(Arrays.toString(twoSum(data2, target2)));
    }

    /**
     * Implementation of the solution algorithm.
     * Solved: 03.28.2023
     * 
     * Takes an array of integers and a target integer
     * and return the array of the two indices that sum to the given
     * target.
     * 
     * @param nums the array of integers that include the two addends
     * @param target the target sum
     * @return the two addends of the sum as an integer array
     */
    public static int[] twoSum(int[] nums, int target) {
        int[] indices = new int[2];
        boolean indicesFound = false;

        // Iterate through the array and calculate a possible difference
        //      that will sum to the target
        for (int i = 0; i < nums.length; i++) {
            int difference = target - nums[i];

            // because this means the current addend is greater than the target
            if (difference < 0)
                continue;

            // Iterate through the array beginning at the next index(because the 
            //      previoud indices have already been checked) and look for a 
            //      number that equals the difference; if one us found, add the
            //      indices to the returning array.
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[j] == difference) {
                    indicesFound = true;

                    indices[0] = i;
                    indices[1] = j;

                    break;
                }
            }

            if (indicesFound)
                break;
        }

        return indices;
    }
}