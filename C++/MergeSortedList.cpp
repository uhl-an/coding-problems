#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode 
{
public:
    int val;
    ListNode *next;
    ~ListNode()
    {
        if(next != nullptr)
        {
            std::cout << "Deleting: " << val << std::endl;

             delete next;
        }
    }
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * @brief Merge two sorted linked lists and return it as a sorted list.
*/
class Solution
{
public:
    /**
     * @brief Merges two sorted linked lists and returns the head of the new list.
     * @param l1 The first sorted linked list.
     * @param l2 The second sorted linked list.
    */
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode *head{nullptr};
        ListNode *curr{nullptr};
        ListNode *temp{nullptr};
        
        while(l1 != nullptr || l2 != nullptr)
        {
            if(l1 == nullptr) // l1 is empty so just add l2
            {
                temp = l2;
                l2 = nullptr;
            }
            else if(l2 == nullptr) // l2 is empty so just add l1
            {
                temp = l1;
                l1 = nullptr;
            }
            else if(l1 -> val < l2 -> val) 
            {
                temp = l1;
                l1 = l1->next;
                temp -> next = nullptr;
            }
            else if(l1 -> val > l2 -> val)
            {
                temp = l2;
                l2 = l2->next;
                temp -> next = nullptr;
            }
            else if(l1 -> val == l2 -> val)
            {
                temp = l1;
                l1 = l1 -> next;

                temp -> next = l2;
                l2 = l2 -> next;
                temp -> next -> next = nullptr;
            }

            // Set the next node
            if(head == nullptr)
            {
                head = temp;
                curr = head;
            }
            else
            {
                curr->next = temp;
            }

            
            while(curr -> next != nullptr)
            {
                curr = curr -> next;
            }
        }

        return head;
    }
};