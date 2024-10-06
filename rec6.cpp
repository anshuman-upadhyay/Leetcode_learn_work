#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr){
    // int it;
    vector<int> a= arr;
    // vector<int> r;
    for(auto& i:a){
        cout<<a<<" ";
    }

    
}
int main(){
    int a;
    vector<int>v;
    cout<<"Enter the elements into the vector";
    for(auto& i:v){
        cin>>a;
        v.emplace_back(a);        
    }
    reverseArray(v);




    return 0;
}