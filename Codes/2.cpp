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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(l1 && l2){
            int add=l1->val+l2->val+carry;
            int unit=add%10;
            carry=add/10;
            ListNode* sum=new ListNode(unit);
            temp->next=sum;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int add=l1->val+carry;
            int unit=add%10;
            carry=add/10;
            ListNode* sum=new ListNode(unit);
            temp->next=sum;
            temp=temp->next;
            l1=l1->next;
        }
        while(l2){
            int add=l2->val+carry;
            int unit=add%10;
            carry=add/10;
            ListNode* sum=new ListNode(unit);
            temp->next=sum;
            temp=temp->next;
            l2=l2->next;
        }
        while(carry){
            int unit=carry%10;
            carry=carry/10;
            ListNode* sum=new ListNode(unit);
            temp->next=sum;
            temp=temp->next;
        }
        return dummy->next;
    }
};