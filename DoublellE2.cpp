#include<bits/stdc++.h>
using namespace std;
// Jab bhi aaisa problem solve karne ka time ho tho and i can emphasis this more
// traversal phele karo then loop se bahar aake insertion ya jo bhi karnahia 
// code ke eak part me uss place tak pahucho aur dusre part me baki ka kaam
// Type of indexing : 0 based
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node (int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
    Node (int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }

};
void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"<->";
        current=current->next;
    }

}
Node *addNode(Node *head, int pos, int data) {
    Node* naya=new Node(data);
    //naya node to store data
    //insertion at head
    if(pos==0){
        naya->next=head;
        if(head) head->prev=naya;
        return naya;
    }
    Node* mover=head;
    int count=0;
    
    //Required node ke position tak pahuch gaye
    while(mover!=NULL && count<pos){
        mover=mover->next;
        count++;
    }

    if(mover==nullptr){
        delete naya;
        return head;
    }


    // Ab insertion karna hai

        naya->next=mover->next;
        if(mover->next){mover->next->prev=naya;}
        mover->next=naya;
        naya->prev=mover;

    
    return head;

}



int main(){
    vector<int> nums={2,4,5};
    Node* head=new Node(nums[0]);
    int s=nums.size();
    Node* mover=head;
    for(int i=1;i<s;i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    printLL(head);
    int data, pos;
    cout<<"Enter the data and place for the data to go:"<<endl;
    cin>>data>>pos;

    head=addNode(head,pos,data);
    printLL(head);


cout<<endl;
return 0;
}



// Run time error i guess position based cases dalne honge
// Node* mover=head;
// int count=0;
// //naya node to store data
// Node* naya=new Node(data);
// //Required node ke position tak pahuch gaye
// while(mover!=NULL && count<pos){
//     mover=mover->next;
//     count++;
// }
// // Ab insertion karna hai
// if(count==pos){
//     naya->next=mover->next;
//     if(mover->next){mover->next->prev=naya;}
//     mover->next=naya;
//     naya->prev=naya;

// }
// return head;
