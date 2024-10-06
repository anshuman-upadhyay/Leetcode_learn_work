#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the no of element";
    int n;
    cin>>n;
    int arr[n];
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