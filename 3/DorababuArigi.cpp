/*
Dorababu Arigi
dorababuarigi
b19cs039*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* speed=head;
        while(speed){
            speed=speed->next;
            if(speed){
                speed=speed->next;
                slow=slow->next;
            }
            if(speed==slow){
                return true;
            }
        }
        return false;
    }
};
