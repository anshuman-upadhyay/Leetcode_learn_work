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
//function to reverse the linked list (taki baar baar na karna pare)
Node* reversal(Node* head){
    Node* current=head;
    Node* prev=NULL;
    while(current){
        Node* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
Node* addOne(Node* head) {
    //head check
    if(head==NULL){return NULL;}
    //reversal 1 aur ussko exactly head le andar hi store kar diye
    head=reversal(head);
    Node* current=head;

    //eak value jo addition ke kaam aayega 
    int carry=1;
    Node* prev=NULL;
    while(current){
        current->data+=carry;
        if(current->data>9){
            current->data=0;
            carry=1;
        }
        else{
            carry=0;
            break;
        }
        prev=current;
        current=current->next;
    }
    //if carry!=0 then we need to add a new node with the value of 1 at the end of the linked list taki reverse karne pe value 10000 jaise bane 
    if(carry){
        prev->next=new Node(1);
    }
    return reversal(head);
}
int main(){
    int data,pos;
    vector<int> arr={4,2,3,1};
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
     printLL(head);
    Node* ans=addOne(head);
    printLL(ans);

    cout<<endl;
    return 0;
cout<<endl;
return 0;
}
//Logic for solving the problem 
// check the head node -> Reverse the linked list -> add one to head->if head ==9 make head =0 and the next node inc by 1 -> if carry goes till the last node we add a new node to the linked list at the end -> re-reverse the linked list 