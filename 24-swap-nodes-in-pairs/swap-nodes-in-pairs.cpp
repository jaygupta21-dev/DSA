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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current=head;
        ListNode* prevgroup=NULL;
        while(current!=NULL){
            ListNode* temp=current;
            int count =0;
            while(temp!=NULL && count<2){
                count++;
                temp=temp->next;
            }
            if(count<2){
                break;
            }
            ListNode* prev=NULL;
            ListNode* nextgroup=temp;
            temp=current;
            while(temp!=nextgroup){
                ListNode* next=temp->next;
                temp->next=prev;
                prev=temp;
                temp=next;
            }
            if(prevgroup==NULL){
                head=prev;
            }
            else{
                prevgroup->next=prev;
            }
            prevgroup=current;
            current->next=nextgroup;
            current=nextgroup;

        }
        return head;
        
        
    }
};