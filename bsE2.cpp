#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<int>& arr, int k) {
    //using binary search
    int s=arr.size();
    int left=0;int right=s-1;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]>=k){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;

        }
    }
    return ans;
    
}
int main(){
    vector<int> arr={1, 2, 8, 10, 11, 12, 19};int k =0;
    // vector<int> arr={1, 2, 8, 10, 11, 12, 19};int k =5;
    // vector<int> arr={1, 2, 8};int k =1;
    int index=findFloor(arr,k);
    cout<<index;
cout<<endl;
return 0;
}
    // approach 1 : index ko low pe set karke array me linear traversal karo jaha chota element mila uska index store karo aur aage baro .... agar index se bara value hua tho index ko update karo ...kyuki array sorted hai kaam element exactly eak minus milega
    // int s=arr.size();
    // int index=-1;
    // for(int i=0;i<s;i++){
    //     if(arr[i]<=k){
    //         index=max(index,i);
    //     }
    // }
    
    //     return index;
