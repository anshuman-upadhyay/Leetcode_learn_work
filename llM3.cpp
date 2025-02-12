#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

bool hasCycle(ListNode *head) {
 if(head==NULL||head->next==NULL){
    return false;
 }
 Node* slow=head, *fast=head;
 while(fast!=NULL && fast->next=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        return true;
    }
 }
 return false;

}

void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}


int main(){
    int data;
    vector<int> arr={1,2,3,4,5};
    // vector<int> arr={1,2,3,4,5,6};
    // create a HEAD 
    Node* head=new Node(arr[0]);
    // Create Mover to move and add element
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    // printLL(head);
    bool ans=hasCycle(head);


cout<<endl;
return 0;
}