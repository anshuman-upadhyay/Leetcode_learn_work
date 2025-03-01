#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){};
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
    Node* movin=head;
    while(movin!=NULL){
        cout<<movin->data<<"->";
        movin=movin->next;
    }
    cout<<endl;
}
Node* reversal(Node* head){
    Node* current= head; Node* prev=NULL;
    while(current){
        Node* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    //linked list ko reverse kiya aur store kar liya
    Node* final =new Node();
    Node* prev=final;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum=0;
        if(l1){
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* carryN=new Node(sum%10);
        prev->next=carryN;
        prev=prev->next;
    }


return final->next;
        
}
// Logic:
//Reverse the ll -> last se add karna suru kiya-> jab tak dono me se koi eak khatam nahi hota ->  



int main(){
    vector<int> arr1={2,4,9};
    vector<int> arr2={5,6,4,9};
    Node* head1=new Node(arr1[0]);
    Node* mover1=head1;
    Node* head2=new Node(arr2[0]);
    Node* mover2=head2;
    for(int i =1;i<arr1.size();i++){
        Node* temp= new Node(arr1[i]);
        mover1->next=temp;
        mover1=temp;
    }
    printLL(head1);
    for(int i =1;i<arr2.size();i++){
        Node* temp= new Node(arr2[i]);
        mover2->next=temp;
        mover2=temp;
    }
    printLL(head2);
    Node* ans=addTwoNumbers(head1,head2);
    printLL(ans);


    cout<<endl;
}