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

Node* CountElementinLoop(Node *head) {
    Node* slow=head;
    Node* fast=head;
    //counting ke liye
    int count =1;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        //ye neeche wala if detectd that the loop is actually present
        if(slow==fast){
            slow=slow->next;
            //loop ki presence confirm ho gayi tho matlab agar fast ko pause karke sirf slow ko traverse karte hai tho
            //eventually loop me chakkar kaat ke slow will meet fast again and agar hum slow ke final steps count kar le tho ho gaya apna kaam
            //as steps take by slow  == no of element in loop -1;
            while(slow!=fast){
                slow=slow->next;
                count++;
            }
            //count ko return maar diye aur exitted
            return count;
        }
    }
    // if no loop detected return 0
    return 0;

}

void printLL(Node* head){
    Node* mover=head;
    while(mover!=NULL){
        cout<< mover->data<<"->";
        mover=mover->next;
    }
    cout<<endl;
}


int main(){
    int data;
    vector<int> arr={1,2,3,4,5};
    // vector<int> arr={1,2,3,4,5,6};
    // create a HEAD 
    Node* head=new Node(arr[0]);
    // Create Mover to move and add element
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    // printLL(head);
    Node* ans=detectCycle(head);
    printLL(ans);

cout<<endl;
return 0;
}
