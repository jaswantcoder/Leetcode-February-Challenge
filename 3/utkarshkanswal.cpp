/* Name: Utkarsh Kumar
Roll No:B18EC033
Leetcode Username: utkarshkanswal
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
            return false;
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=nullptr&&fast->next!=nullptr)
        {
           
            slow=slow->next;
            fast=fast->next->next;
            if(slow==nullptr||fast==nullptr)
                return false;
             if(slow==fast)
                return true;
            
        }
        return false;
    }
};