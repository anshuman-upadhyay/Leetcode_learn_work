#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
        Node(int data1){
            data=data1;
            next=nullptr;
        }

};
bool searchKey(int n, Node* head, int key) {
    Node* current=head;
    while(current!=NULL){
        if(current->data==key){
            return true;
        }
        else{
            current=current->next;
            if(current==NULL){
                return false;
            }
        }
    }
    return false;
    }
int main(){
    int data;
    vector<int> nums={4,5,1,9};
    Node* head=new Node(nums[0]);
    Node* mover=head;
    int count=1;
    for(int i =1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
        count++;
    }
    int target;
    cout<<"Enter the element to be searched";
    cin>>target;
    bool ans=searchKey(count,head,target);
    cout<<"the Targeted element's presence is :"<< ans<<endl;
cout<<endl;
return 0;
}