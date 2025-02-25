#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
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

Node *getIntersectionNode(Node *headA, Node *headB) {
    //create unordered set as : No sorting & unique constraint and look up time O(1)
    unordered_set<Node*> st;
    //insert all Node type pointers of LL1 into set
    while(headA!=NULL){
        st.insert(headA);
        headA=headA->next;
        }
    //using find funtion : ab kya hoga ki agar 2 Nodes ka data same ho sakta hai but same pointer use nahi hoga 
    //tho use get unique comparison of pointers
    //meaning agar headA(stored) and headB (comparing ) me agar pointer same hua mane intersection hai tho ussko return kar 
    // but kyuki at the end of sLL last pointer hamesha NULL ko point karega tho ussko prevent karne ke 
    //liye last node ko exclude kardo comparison ke time pe 
    // (kyuki unordered set me koi arrangement ka order nahi hai tho if ke andar hi last ko urana hoga)
    while(headB!=NULL){
        if(st.find(headB)!=st.end()){
            return headB;
        }
        headB=headB->next;
    }        
    return NULL;
}

int main(){
    int data,pos;
    vector<int> arr={4,2,3,1};
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
     printLL(head);
    Node* ans=sortList(head);
    printLL(ans);

    cout<<endl;
    return 0;
}
//Brute force using 2 loops to match each and every element one by one 
// Node *getIntersectionNode(Node *headA, Node *headB) {
//     if(!headA || !headA->next){return NULL;}
//     if(!headB || !headB->next){return NULL;}
//     while(headB!=NULL){
//         Node* temp=headA;
//         while(temp!=NULL){
//             if(temp==headB){
//                 return temp;
//             }
//             temp=temp->next;
//         }
//         headB=headB->next;
//     }
//     return NULL;
// }