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
    int length(ListNode* root){
        if(!root)
            return 0;
        return 1+length(root->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=length(head);
        n=len-n+1;
        ListNode* prev=NULL;
        ListNode* curr=head;
        for(int i=1;i<n and curr->next != NULL;i++){
            prev=curr;
            curr=curr->next;
        }
        if(prev==NULL){
            ListNode* temp=curr;
            curr=curr->next;
            delete temp;
            head=curr;
        }else if(curr->next==NULL){
            ListNode* temp=curr;
            prev->next=NULL;
            delete temp;
        }else{
            ListNode* temp=curr;
            prev->next=curr->next;
            delete temp;
        }
        return head;
    }
};