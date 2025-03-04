#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
    
    ListNode(int data,ListNode* ptr){
        val=data;
        next=ptr;
    }
};
void printLL(ListNode* head){
    ListNode* mover=head;
    while(mover){
        cout<<mover->val<<"->";
        mover=mover->next;
    }
}

ListNode* reversal(ListNode* head,ListNode* end){
    if(!head){return NULL;}
    if(!head->next){return head;}
    
    ListNode* current=head;
    ListNode* prev=NULL;
    while(current!=end->next){
        ListNode* naya=current->next;
        current->next=prev;
        prev=current;
        current=naya;
    }
    
    return head;
}

ListNode* reverseKGroup(ListNode* head, int k) { 
    ListNode* current=head;  
    ListNode* mover=head;
    while(current->next){
        ListNode* mover1=mover->next;
        int count=k;
        if(count>0){
                mover1=mover1->next;
                count--;
                // continue;
            }
        if(count==0){reversal(mover,mover1);}
        mover=mover1->
    }

    return head;    
}


int main(){
    int k=2;
    vector<int> nums={1,2,3,4,5};
    ListNode* head=new ListNode(nums[0]);
    ListNode* mover=head;
    for(int i=1;i<nums.size();i++){
        ListNode* temp=new ListNode(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    printLL(head);
    ListNode* ans=reverseKGroup(head,k);
    cout<<endl;
    printLL(ans);
cout<<endl;
return 0;
}