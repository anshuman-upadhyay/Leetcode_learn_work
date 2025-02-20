#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        data=data;
        next=NULL;
    }

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
bool isPalindrome(Node* head) {
    if(head==NULL || head->next==NULL){
        return true;
    } 
    stack<Node*> stk;
    Node* stacker=head;
    Node* comp=head;
    //put this data into the stack taki retrieval ke time pe reverse me elements nikle
    while(stacker){
        stk.push(stacker);
        stacker=stacker->next;
    }
    while(comp!=NULL && !stk.empty()){
        int out=comp->data;
        int stkout=stk.top()->data;
        if(out!=stkout){
            return false;
        }
        comp=comp->next;
        stk.pop();
    }
    return true;
}
int main(){
    vector<int> nums={1,2};
    Node* head=new Node(nums[0]);
    Node* current=head;

    for(int i =0;i<nums.size();i++){
        Node* temp= new Node(nums[i]);
        current=current->next;
        current=temp;
    }
    bool plain=isPalindrome(head);
    cout<<plain;

    cout<<endl;
    return 0;
}