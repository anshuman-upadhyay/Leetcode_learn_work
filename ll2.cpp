#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
        Node(int data1){
            data=data1;
            next=nullptr;
        }

};
Node *insertAtEnd(Node *head, int x) {
    Node* current=head;
    Node* temp=new Node(x);
    //edge case for an input of no previous element
    if(head==NULL){
        return temp;
    }
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next=temp;
    
    return head;
    }


int main(){
    int data;
    vector<int> arr={1,2,3,4,5};
    // create a HEAD 
    Node* head=new Node(arr[0]);
    // Create Mover to move and add element
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    cout<<"Enter the data thats needed to be appended";
    cin>>data;
    Node* ans=insertAtEnd(head,data);
    while(ans){
        cout<<ans->data<<"->";
        ans=ans->next;
    }
    cout<<"Null"<<endl;
    

cout<<endl;
return 0;
}