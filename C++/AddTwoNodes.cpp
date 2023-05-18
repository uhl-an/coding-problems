/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
#include <iostream>
#include <memory>

class ListNode
{
public:
    int val;
    std::unique_ptr<ListNode> next;

    ListNode(int val, std::unique_ptr<ListNode> next) : val{val}, next{std::move(next)} {}
    ListNode(int val) : val{val}, next{nullptr} {}
    ListNode() = default;
    ~ListNode() = default;
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* l1front{l1};
        ListNode* l2front{l2};
        ListNode* sumFront = new ListNode();
        ListNode* sum = new ListNode();
        int carryOne = 0;
        bool sumFound = false;

        do
        {
            int digitSum;

            if(l2front == nullptr)
            {
                digitSum = carryOne + l1front -> val;
                l1front = l1front -> next;
            }
            else if(l1front == nullptr)
            {
                di
            }
            int digitSum = l1front -> val + l2front -> val;

            if(digitSum >= 10)
            {
                sum = new ListNode(0, sum -> next);
            }


            l1front = l1front -> next;
        } while(l1front || l2front);

        return l1;
    }
};