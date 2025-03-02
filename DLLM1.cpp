#include<bits/stdc++.h>
using namespace std;
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
Node* createDLL(vector<int> &x){
    int s=x.size();
    Node * head=new Node(x[0]);
    Node* mover=head;
    for(int i=1;i<s;i++){
       Node* temp= new Node(x[i]);
       mover->next=temp;
       temp->prev=mover;
       mover=temp;
    }
    return head;
}
void printDLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"<->";
        mover=mover->next;
    }
    cout<<endl;
}
void deleteAllOccurOfX(class Node** head_ref, int x) {
    Node* prev=NULL;
    Node* current=head;
    
}


int main(){
    int x;
    cout<<"Enter the positions"<<endl;
    cin>>x;
    vector<int> arr={2,2,10,8,4,2,5,2};
    Node* head=createDLL(arr);
    printDLL(head);
    deleteAllOccurOfX(&head,x);
    printDLL;
    

cout<<endl;
return 0;
}