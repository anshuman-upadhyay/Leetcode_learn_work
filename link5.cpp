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
void deleteNode(Node* node) {
       if(node==nullptr || node->next== nullptr){
        return;
    }
    node->data=node->next->data;
    Node* temp=node->next;
    node->next=node->next->next;
    delete temp;
    }
void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
    }}
int main(){
    int data;
    vector<int> nums={4,5,1,9};
    Node* head=new Node(nums[0]);
    Node* mover=head;
    int count=1;
    for(int i =1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
        count++;
    }
    Node* next_head=head->next;
    deleteNode(head->next->next);
    printLL(head);
cout<<endl;
return 0;
}