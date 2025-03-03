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
Node* removeDuplicates(Node *head){
    //remember jis question me delete/remove karne ka scene hai ussme 
    // memory clean karna hoga nahi tho seg fault 
    Node* current=head->next;
    while(current){
        Node* pichla=current->prev;
        if(pichla->data==current->data){
            pichla->next=current->next;
            if(current->next){
                current->next->prev=pichla;
            }
            //delete current : extra added 
            Node* temp=current;
            current=current->next;
            delete temp;
        }
     else{
        current=current->next;
    }
    }
    return head;
}
int main(){
    // vector<int> arr={1,1,1,2,3,4};
    vector<int> arr={1,2,2,3,3,4,4};
    Node* head=createDLL(arr);
    printDLL(head);
    Node* ans=removeDuplicates(head);
    printDLL(ans);
    

cout<<endl;
return 0;
}