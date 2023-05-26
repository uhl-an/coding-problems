using System;

/**
  * Solved: 05.26.2023
  * Given a non-negative integer x, return the square root of x rounded down
  * to the nearest integer. The returned integer should be non-negative as
  * well.
  *
  * You must not use any built-in exponent function or operator.
  *
  * For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
  */
class Solution
{
    public int sqrt(int x)
    {
        int root = 0;
        int bit = 1 << 15;

        // "bit" starts at the most significant bit of "x".
        while (bit > 0)
        {
            // Set the root bit to the current root plus the current bit.
            root |= bit;

            // Overestimate check
            if (root > x / root)
            {
                root ^= bit;
            }

            // Move "bit" to the next significant bit.
            bit >>= 1;
        }

        return root;
    }
}

public class Sqrt
{
    public static void Main(string[] args)
    {
        Solution solution = new Solution();
        int x = 49;
        int result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 8;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 9;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 10;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 2147395599;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 2147483647;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 0;
        result = solution.sqrt(x);
        Console.WriteLine(result);

        x = 17;
        result = solution.sqrt(x);
        Console.WriteLine(result);
    }
}
