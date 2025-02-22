#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;

    Node (int data1){
        data=data1;
        next=NULL;
    }
    Node (int data1,Node* next1){
        data=data1;
        next=next1;
    }
};



void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}

Node* deleteMiddle(Node* head){
    if( !head->next){return NULL;}
    Node* slow=head;
    Node* fast=head;
    //set prev to NULL
    Node* prev=NULL;
    //get to middle element and
    while(fast && fast->next){
        //prev exactly eak step peeche chalega
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    // erase it out 
    //prev ka next pointer slow ko pass karke nikal jaega
    prev->next=slow->next;
    delete slow;
    return head;
}

int main(){
    int data;
    // vector<int> arr={1,2,3,4,5};
    vector<int> arr={1};
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    printLL(head);
    Node* ans=deleteMiddle(head);
    printLL(ans);


cout<<endl;
return 0;
}