#include<bits/stdc++.h>
using namespace std;
//Variable creation 
//Node for singly linked list
class sNode{
    public:
    int data;
    sNode* next;

    sNode(int data1){
        data=data1;
        next=nullptr;
    }

    sNode(int data1,sNode* next1){
        data=data1;
        next=next1;
    }
};
// Node for doubly linked list
class dNode{
    public:
    int data;
    dNode* next;
    dNode* prev;

    dNode(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

    dNode(int data1,dNode* next1,dNode* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
};
//create individual Node
sNode* createNodeLL(int data){
    sNode* newNode= new sNode(data);
    return newNode;
}
//Create Linked list
sNode* createLL(vector<int> &x){
    int s=x.size();
    sNode * head=new sNode(x[0]);
    sNode* mover=head;
    for(int i=1;i<s;i++){
        sNode* temp=createNodeLL(x[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

sNode* addNewLL(sNode* head,int pos,int data){
    sNode* temp=new sNode(data);
    if(head==NULL){return temp;}
    if(pos==0){
        temp->next=head;
        head=temp;
        return head;
    }
    sNode* mover=head;
    int count=1;
    //traverse through the linked list to the place jaha insert karna hai
    while(mover!=nullptr && count < pos){
        mover=mover->next;
        count++;
    }
        temp->next=mover->next;
        mover->next=temp;

    
    return head;
}






//Create New node of Doubly linked list
dNode* createNodeDLL(int data){
    dNode* newNode= new dNode(data);
    return newNode;
}
// Create Doubly linked list
dNode* createDLL(vector<int> &x){
    int s=x.size();
    dNode * head=new dNode(x[0]);
    dNode* mover=head;
    for(int i=1;i<s;i++){
       dNode* temp=createNodeDLL(x[i]);
       mover->next=temp;
       temp->prev=mover;
       mover=temp;
    }
    return head;
}

//print Singly linked list
void printLL(sNode* head){
    sNode* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}


//Print Doubly linked list
void printDLL(dNode* head){
    dNode* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"<->";
        mover=mover->next;
    }
    cout<<endl;
}





int main(){
    vector<int> x={0,1,2,3,4,5,6,7};
    sNode* ll=createLL(x);
    printLL(ll);
    sNode* ll1=addNewLL(ll,1,23);
    printLL(ll1);

    
    dNode* dll=createDLL(x);
    printDLL(dll);



    cout<<endl;
    return 0;
}

