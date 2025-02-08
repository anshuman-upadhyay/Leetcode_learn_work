#include<bits/stdc++.h>
using namespace std;
// Type of indexing : 1 based
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
        
    }

    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;

    }
};
Node* deleteNode(Node* head, int x) {
    //Traverser
    Node* mover=head;
    int count=1;
    if(x==1){
       Node* temp=head;
       head=head->next;
       if(head){
        head->prev=nullptr;
       }
       delete temp;
       return head;
    }

    //Element khojna 
    while(mover!=NULL && count<x ){
        mover=mover->next;
        count++;
    }
    // Out of bound pe retunr kar dega 
    if(mover == NULL){
        return head;
    }
    //Khoji hui jagah pe element urana 
    if(mover->prev){
        mover->prev->next=mover->next;
    }
    if(mover->next){
        mover->next->prev=mover->prev;
    }


    delete(mover);
    return head;


}
void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"<->";
        current=current->next;
    }

}

int main(){
    // vector<int> nums={28,72};
    vector<int> nums={1,3,4};
    // vector<int> nums={1345,23,56543,34};
    Node* head=new Node(nums[0]);
    int s=nums.size();
    Node* mover=head;
    for(int i=1;i<s;i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    printLL(head);
    int data, pos;
    cout<<endl<<"Enter the place for the data to go:"<<endl;
    cin>>pos;

    head=deleteNode(head,pos);
    printLL(head);

cout<<endl;
return 0;
}