
class Solution {
public:
 ListNode* reverse(ListNode*head){
ListNode*prev=nullptr;
ListNode*curr=head;
while(curr!=nullptr){
ListNode*nextNode=curr->next; //save next node
curr->next=prev; //reverse linked list
prev=curr; //move prev forward
curr=nextNode; //move curr forward
 }
 return prev;
 }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head=reverse(head); //reverse the list
        //remove nth node from beginning
        if(n==1){
            ListNode*temp=head;
            head=head->next;
            delete temp;
        }
        else{
            ListNode*temp=head;
            for(int i=0;i<n-2;i++){
                temp=temp->next;
            }
            ListNode*del=temp->next;
            temp->next=del->next;
            delete del;
        }
        //reverse the list again
        head=reverse(head);
        return head;
        
    }
};