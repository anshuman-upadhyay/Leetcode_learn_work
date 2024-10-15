#include<bits/stdc++.h>
using namespace std;
// time complexity is O(n2) for worst and avg while its O(n) in the best ie presorted place
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        //the final comparison of j is being done at the time of 1st index hence j>0 and notj>=0
        while(j>0&&arr[j-1]>arr[j]){
            arr[j-1]=arr[j-1]^arr[j];
            arr[j]=arr[j-1]^arr[j];
            arr[j-1]=arr[j-1]^arr[j];
            j--;
        }
    }
}
int main(){
    int arr[6]={20,13,9,24,52};
    insertionsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<",";
    }



cout<<endl;
return 0;
} 