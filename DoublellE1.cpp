#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data=d;
        next=nullptr;
        prev=nullptr;
    }

    Node(int d,Node* next1,Node* pre1) {
        data=d;
        next= next1;
        prev=pre1;
    }
};
Node* constructDLL(vector<int>& arr) {
    int s=arr.size();
    if(s==0){return nullptr;}
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<s;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}

void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"<->";
        current=current->next;
    }

}
int main(){
    vector<int> nums={1,2,3,4,5};
    Node* head=constructDLL(nums);
    printLL(head);
cout<<endl;
return 0;
}