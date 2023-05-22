using System;
using System.Collections.Generic;

/**
    * Solved: 05.22.2023
    * Given a string s containing just the characters '(', ')', '{', '}', '[' and *   ']', determine if the input string is valid.
    * An input string is valid if:
    *   Open brackets must be closed by the same type of brackets.
    *   Open brackets must be closed in the correct order.
    *   Every close bracket has a corresponding open bracket of the same type.
    */
class Solution
{
    /**
        * Given a string of brackets, determine if the string is valid.
        * 
        * @param bracketString The string of brackets to check.
        * @return True if the string is valid, false otherwise.
        */
    public bool Solve(string bracketString)
    {
        int depth = 0;
        bool isValidParenthesis = true;

        // Iterate through the string, removing matching pairs of brackets.
        for (int i = 0; i < bracketString.Length; i++)
        {
            if(IsRightFacing(bracketString[i]))
            {
                depth++;
            }
            else
            {
                depth--;

                if(depth < 0)
                {
                    isValidParenthesis = false;
                    break;
                }

                // If the previous character is a matching bracket, remove the pair.
                if(Matches(bracketString[i - 1], bracketString[i]))
                {
                    bracketString = bracketString.Remove(i - 1, 2);
                    i -= 2; // Move the index back two spaces to account for the removed characters.
                }
                else
                {
                    isValidParenthesis = false;
                    break;
                }
            }
        }

        // If the depth is not zero, or the string is not empty, the string is not valid.
        if(depth != 0 || bracketString.Length != 0)
        {
            isValidParenthesis = false;
        }

        return isValidParenthesis;
    }

    private bool Matches(char c1, char c2)
    {
        return (c1 == '(' && c2 == ')') 
                || (c1 == '{' && c2 == '}')
                || (c1 == '[' && c2 == ']');
    }

    private bool IsRightFacing(char c)
    {
        return c == '(' || c == '[' || c == '{';
    }
}

/**
    * The main class for the program.
    */
public class Program
{
    public static void Main(string[] args)
    {
        string dataString1, dataString2, dataString3;

        Solution s = new Solution();
        dataString1 = "()";
        dataString2 = "()[]{}";
        dataString3 = "((([]{}){}))})))";

        Console.WriteLine($"Data 1: {dataString1} \n\t Result: {s.Solve(dataString1)}");
        Console.WriteLine($"Data 2: {dataString2} \n\t Result: {s.Solve(dataString2)}");
        Console.WriteLine($"Data 3: {dataString3} \n\t Result: {s.Solve(dataString3)}");
    }
}