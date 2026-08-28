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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        // it is a edge case where we want to delete the head here size-n=0 therefore j=0 that's why loop does not runs 
        if(n == size){
        ListNode* temp = head;
        head = head->next;
       delete temp;
        return head;
        }
        int j=size-n;

        ListNode* prev=NULL;
        for(int i=0;i<j;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=NULL;
        return head;
        
    }
};