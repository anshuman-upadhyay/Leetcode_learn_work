#include<bits/stdc++.h>
using namespace std;
void select(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=arr[i];
        for(int j=0;j<n-1;j++){
            if(min<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int he[9]={4, 1, 3, 9, 7,6,8,5,2};
    select(he,9);
    for(int i=0;i<size(he);i++){
         cout<<he[i]<<",";
    }





    cout<<endl;
    return 0;
}