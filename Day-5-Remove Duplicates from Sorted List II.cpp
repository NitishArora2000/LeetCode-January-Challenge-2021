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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode *FakeHead=new ListNode(0);
        FakeHead->next=head;
        //cout<<FakeHead->next->val;
        ListNode *pre=FakeHead;
        ListNode *cur=head;
        while(cur!=NULL){
            //cout<<"In";
            while(cur->next!=NULL&&cur->val==cur->next->val){
                cur=cur->next;
                //cout<<cur->val<<" ";
            }
            if(pre->next==cur){
                pre=pre->next;
            }
            else{
                pre->next=cur->next;
            }
            cur=cur->next;
        }
        return FakeHead->next;
    
    }
};
