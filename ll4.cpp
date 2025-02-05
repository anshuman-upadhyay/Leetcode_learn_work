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
int getCount(struct Node* head) {
        int count=1;
        Node* current=head;
        if(head==NULL){
            return 0;
        }
        while(current->next!=NULL){
            count++;
            current=current->next;
            
        }

        return count;
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
  
    int count= getCount(head);
    cout<<"The number of element in the linked list are: "<<count;
    

cout<<endl;
return 0;
}