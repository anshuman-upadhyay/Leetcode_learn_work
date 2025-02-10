#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    
    Node(int data1){
        data=data1;
        next=NULL;
    }
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    
};
Node* middleNode(Node* head) {
        Node* turtle=head;
        Node* rabbit=turtle;
        while(rabbit->next!=NULL){
            turtle=turtle->next;
            rabbit=rabbit->next;
            if(rabbit->next!=NULL){
                rabbit=rabbit->next;
            }
            
        }
        return turtle;
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
    Node* ans=middleNode(head);
    printLL(ans);
    
cout<<endl;
return 0;
}