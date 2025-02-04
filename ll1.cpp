#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node * next;
    public:
        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
        Node (int data){
            data=data1;
            next=nullptr;
        }

}
Node* constructLL(vector<int>& arr) {
    int s=arr.size();
    for(int i =0;i<s;i++){
        Node* a=new Node(arr[i]);
    }
    }

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* c= constructLL(arr);

cout<<endl;
return 0;
}