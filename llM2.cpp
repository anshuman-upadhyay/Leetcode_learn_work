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
// recursive approach
Node* reverseList(Node* head){
    //
    if(head==NULL||head->next==NULL){return head;}
    Node* newhead=reverseList(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
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
    printLL(head);
    Node* ans=reverseList(head);
    printLL(ans);


cout<<endl;
return 0;
}



//iterative approach

// // using teen pointers 
// eak jo current ka dhayaan rakhega 
// eak jo past ko store karega 
// eak jo future dekhega
// Node* reverseList(Node* head) {
//     Node* current=head;
//     Node* prev=NULL;
//     while(current!=NULL){
//          Node* agla=current->next;
//         current->next=prev;
//         prev=current;
//         current=agla;
//     }
//     return prev;

// }