#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d,Node* next1){
        data=d;
        next= next1;
    }
    Node(int d){
     data=d;
     next=nullptr;
    }
};
Node* constructLL(vector<int>& arr) {
    int s=arr.size();
    Node* head=new Node(arr[0]);// Storing the first element in and mark it as head for reference
    Node* mover=head;// pointer jo actually move karega 
    for(int i=1;i<s;i++){// traverse through the array
        Node* temp= new Node(arr[i]);// do the same as head but this time for the entire array 
        mover->next=temp;// move moverpointer to the next element
        mover=temp;
    }
    return head;


    }
int main(){
    vector<int> arr={2,5,8,7};
    Node* head= constructLL(arr);
    cout<<head->data;

cout<<endl;
return 0;
}