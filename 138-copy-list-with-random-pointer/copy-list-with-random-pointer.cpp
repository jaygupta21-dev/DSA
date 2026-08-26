/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*>m;
        Node* newhead=new Node(head->val);
        Node* oldtemp=head->next;
        Node* newtemp=newhead;
        m[head]=newhead;
        while(oldtemp!=NULL){
            Node* newnode=new Node(oldtemp->val);
            newtemp->next=newnode;
            m[oldtemp]=newnode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL){
            if(oldtemp->random!=NULL){
                Node* temp=m[oldtemp->random];
                newtemp->random=temp;
                }
                oldtemp=oldtemp->next;
                newtemp=newtemp->next;

        }
        return newhead;
        
    }
};