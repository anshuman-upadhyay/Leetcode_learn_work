// Frequencies of Limited Range Array Elements
#include<bits/stdc++.h>
using namespace std;
  void frequencyCount(vector<int>& arr, int N, int P){
    int hash[arr.size()+1]={0};
    for(int i=0;i<arr.size();i++){
        hash[arr[i]-1]+=1;
    }
    for(int i =0;i<N;i++){
        arr[i]=hash[i];        
            }

         }
int main(){
    // vector<int> b{8,9};
    // int n=2;
    // int p=9;
    // vector<int> b{2,3,2,3,5};
    // int n=5;
    // int p=5;
    vector<int> b{3,3,3,3};
    int n=4;
    int p=3;
    frequencyCount(b,n,p);
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}