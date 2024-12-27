#include<bits/stdc++.h>
using namespace std;
vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        

    }
int main(){
    vector<int> arr={5, 6, 8, 9, 6, 5, 5, 6};int x=7;
    // vector<int> arr={5, 6, 8, 8, 6, 5, 5, 6};int x=10;
    vector<int> ans=getFloorAndCeil(x,arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
cout<<endl;
return 0;
// failure attempt
        // // int floor;int ceil;
        // int min =INT_MAX;
        // int max =INT_MIN;
        // for(int i =0;i<s;i++){
        //     if(min>arr[i]){
        //         min=arr[i];
        //     }
        //     else if(max<arr[i]){
        //         max=arr[i];
        //     }
        // }
        // cout<<endl<<"Min: "<<min<<","<<"Max: "<<max<<endl;
        // int i=0;
        // int c=min;
        //     int smin=INT_MAX;
        //     int smax=INT_MIN;
        // while(i<s-1){
        //     if(arr[i]>min && arr[i]<=x){
        //         if(smax<arr[i]){
        //             smax=arr[i];
        //         }
        //     }
        //  if(arr[i]<max && arr[i]>=x){
        //         if(smin>arr[i]){
        //             smin=arr[i];
        //         }
        //     }
        
        //     i++;

        // }
        // ans.push_back(smax);
        // ans.push_back(smin);

}