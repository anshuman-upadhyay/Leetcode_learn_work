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

Node* removeNthFromEnd(Node* head, int n) {
        if(head ==NULL || head->next == NULL){
            if(n==1){
                return NULL;
            }
            else{
                return head;
            }
        }
    int no=0;
    int count=0;
    Node* mover=head;
    Node* current=head;
    //find no of elements in the LL
    while(mover){
        mover=mover->next;
        no++;
    }
    if(n==no){
        Node* newHead=head->next;
        delete head;
        return newHead;
    }
    //find the element and pop it out of the linkedlist
    Node* past=NULL;
    while(current!=NULL){
        if(count== no-n){
            
            past->next=current->next;
            delete current;
            break;
        }
        past=current;
            current=current->next;
        count++;
        
    }
       return head; 
}

int main(){
    int data,pos;
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
     cout<<"enter the position";
     cin>>pos;
    Node* ans=removeNthFromEnd(head,pos);
    printLL(ans);

cout<<endl;
return 0;
}
