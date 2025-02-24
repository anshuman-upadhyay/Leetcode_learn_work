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
void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}
Node* sortList(Node* head) {
    //Attempt 2 : using the brute force
    // Accepted hahahaha
    vector<int>arr;
    if(!head && !head->next){return head;}
    Node* current=head;
    while(current){
        arr.emplace_back(current->data);
        current=current->next;
    }
    sort(arr.begin(),arr.end());
    Node* temp=new Node(arr[0]);
    Node* temp1=temp;
    for(int i =1;i<arr.size();i++){
        Node* naya =new Node(arr[i]);
        temp1->next=naya;
        temp1=naya;
    }
    return temp;
}

int main(){
    int data,pos;
    // vector<int> arr={3,2,1,4,5};
    vector<int> arr={4,2,3,1};
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
    Node* ans=sortList(head);
    printLL(ans);

cout<<endl;
return 0;
}

// brute force : Convert LL into a vector apply sort then reconvert it back into a linked list 


//Attempt 2 :apply bubble sort 
// Time limit exceeded
// if(!head){return head;}
// Node* current=head;
// while(current && current->next){
//     Node* agla=current;
//   for(;agla!=NULL;agla=agla->next){
//     if(agla->data < current->data){
//         int temp=current->data;
//         current->data=agla->data;
//         agla->data=temp;
//     }
// }  
// current=current->next;  
// }
// return head;
    