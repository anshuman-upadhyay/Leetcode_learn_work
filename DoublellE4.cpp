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

Node* reverseDLL(Node* head) {
    Node* current=head;
    Node* mover=current->next;
    Node* temp=NULL;// empty pointer
    while(current!=NULL){
        //3rd value exchange karna
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        
       current=current->prev;
    }
    
   if(temp!=nullptr){
    head=temp->prev;
   }
    return head;
}


void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"<->";
        current=current->next;
    }
    cout<<endl;
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
    head=reverseDLL(head);
    printLL(head);

cout<<endl;
return 0;
}