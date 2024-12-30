#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    // my approach gives best worst and avg tc to be O(N2)
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    // better approach gives the best tc to O(n)
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    bubblesort(arr,6);
    for(int i =0;i<6;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}