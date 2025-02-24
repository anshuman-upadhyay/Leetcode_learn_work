#include<bits/stdc++.h>
using namespace std;
//Ideally this is what should have been done to solve LLM10 
//using merge sort 
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

void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}


Node* findMiddle(Node* head){
    if(!head || !head->next){return head;}
    Node* slow=head;
    //fast should be one step ahead of slow to counter the even sized list problems 
    Node* fast=head->next;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
Node* mergeSortedList(Node* left,Node* right){
    if(!left) return right;
    if(!right) return left;

    if(left->data <= right->data){
        left->next = mergeSortedList(left->next,right);
        return left;
    }
    else{
        right->next = mergeSortedList(left,right->next);
        return right;
    }

}
Node* mergeSort(Node* head){
    if(!head || !head->next) return head;
    //Find the middle of the list 
    Node* middle=findMiddle(head);
    Node* righthalf=middle->next;
    //middle mil gaya ab usska use karke list ko spilt kar do
    middle->next=NULL;
    Node* left=mergeSort(head);
    Node* right=mergeSort(righthalf);

    return mergeSortedList(left,right);
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
    Node* ans=mergeSort(head);
    printLL(ans);


cout<<endl;
return 0;
}