#include<bits/stdc++.h>
using namespace std;
// a globaly declared array can have 10^7 size and boolean array of 10^8
int main(){
    cout<<"enter the no of element";
    int n;
    cin>>n;
    int arr[n];//inside main the largest int array size that can be declared is of 10^6 and a bool array 10^7
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout<<"enter the no of elements to besearched\n";
    int q;
    cin>>q;
    while(q--){
    cout<<"enter the no to besearched\n";
        int num;
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }

}
// hashing methods:1 division method:what ever no is there do (num%10)  only once and store the remainder into the hashed array
// in case 2 nos have the same remainder(collision) we use a linked list from the place of the first element in the map and as it is a linked list we can sort them as needed in real time
// 2 folding method
// 3 mid square method

