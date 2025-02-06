#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int d) {
        data=d;
        next=nullptr;
        previous=nullptr;
    }

    Node(int d,Node* next1,Node* pre1) {
        data=d;
        next= next1;
        previous=pre1;
    }
};
void printLL(Node* node){
    Node* current=node;
    while(current!=NULL){
        cout<<current->data<<"<->";
        current=current->next;
    }

}
int main(){

    printLL(head);
cout<<endl;
return 0;
}