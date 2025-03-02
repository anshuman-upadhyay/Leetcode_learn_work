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
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target){
    if(head == NULL){return {};}
    vector<pair<int,int>> holder;
    Node* current=head;
    Node* last=NULL;
    Node* mover=current;
     //take mover to the last node
    while(mover->next){
        mover=mover->next;
         }
    //last ko last pe pe aake rakh do
    last=mover;
   while(current && last && current!=last && last->next!=current){
    int sum=current->data+last->data;
    if(sum>target){
        last=last->prev;

    }
    else if(sum<target){
        current=current->next;
    }
    else{
        holder.push_back({current->data,last->data});
        last=last->prev;
        current=current->next;
    }


   }


     return holder;
    }


int main(){
    int x;
    cout<< "Enter the target";
    cin>> x;
    vector<int> arr={1,2,4,5,6,8,9};
    Node* head=createDLL(arr);
    printDLL(head);
    vector<pair<int,int>>ans=findPairsWithGivenSum(head,x);
    cout<<"The answer is :"<<endl;
    for(auto nums:ans){
        cout<<"("<<nums.first<<","<<nums.second<<")"<<",";
    }
    

cout<<endl;
return 0;
}