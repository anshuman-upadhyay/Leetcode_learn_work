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

void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}
//attempt 2: odd hai tho eak Linked list banao even ke liye then start end jor do
Node* oddEvenList(Node* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* odd=head;//as per question ye hai odd index
    Node* even=head->next;// as per the question ye even index hai
    Node* even1=even; // stores the even node to link even and odd
    while(even && even->next){
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }
    odd->next=even1;
    return head;
}


int main(){
    vector<int> nums={1,2,3,4,5,6,7,8};
    Node* head=new Node(nums[0]);
    Node* current=head;

    for(int i =1;i<nums.size();i++){
        Node* temp= new Node(nums[i]);
        current->next=temp;
        current=temp;
    }
    printLL(head);
    Node* ans=oddEvenList(head);
    printLL(ans);


cout<<endl;
return 0;
}

//attempt 1 : eventh node ko uthao aur end me daal do 

// fails at test case {1,2,3,4,5,6,7,8}

// Node* oddEvenList(Node* head) {
//     if(!head|| !head->next){
//             return head;
//         }
//         Node* current=head;
//         Node* prev=NULL;
//         // Last position tak laane ke liye 
//         Node* last=head;
//         while(last->next!=NULL){
//             last=last->next;
//         }
//         //actual last node ko hold karta hai
//         Node* tail=last;
//             // ab agar count(index) even hai tho uss node ko alag karenge 
//         // aur last ke next me add kar denge
         
//         int count=1;
//         Node* temp;
//         Node* ogtail=last;
//         while( current!= NULL && current->next!=NULL && current!= ogtail){
//             //If node position is odd
//             if(count%2!=0){
//                 //prev odd node ko hold karega 
//                 prev=current;
//                 // temp eventh node ko hold karega
//                  temp=current->next;
//                  prev->next=temp->next;
//                  if(prev->next==NULL){
//                     tail=prev;
//                  }
//                 temp->next=NULL;
    
//                 // end me sored temp ko last->next me lagana hai ayr last ko temp ke place pe lana hai
//                  tail->next=temp; 
//                 tail=temp;
//                 tail->next=NULL;
//             }
//             else{
//                 current=current->next;
//             }
//             count++;
//         }
//             return head;
            
// }



