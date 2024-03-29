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
    //reverse second half and traverse both halves seperately
    
    void reorderList(ListNode* head) {
        
       ListNode* slow=head, *fast=head;
        
        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* p=nullptr, *q=slow, *r=slow->next;
        while(q!=nullptr){
            r=q->next;
            q->next=p;
            
            p=q;
            q=r;
        }
        
        ListNode *head1=head, *head2=p;
        while(head2->next!=nullptr){
            ListNode* temp = head1->next;
            head1->next=head2;
            head1=temp;
            
            temp=head2->next;
            head2->next= head1;
            head2=temp;
        }
        
        
    }
};