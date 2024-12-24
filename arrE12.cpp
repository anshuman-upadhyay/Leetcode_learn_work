#include<bits/stdc++.h>
using namespace std;
int lenOfLongestSubarr(vector<int>& arr, int k) {
    //using hashing
    map<int,int> preSum;
    int sum=0;
    int maxLen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem =sum-k;
        if(preSum.find(rem)!=preSum.end()){
            int len =i-preSum[rem];
            maxLen=max(maxLen,len);
        }
        //this is what handles cases for zeros
        if(preSum.find(sum)==preSum.end()){
            preSum[sum]=i;
        }
    }
    return maxLen;
    }
int main(){
    // vector<int> arr={10,5,2,7,1};int k =15;
    vector<int> arr{-1,2,-3};int k =-2;
    // vector<int> arr={1, -1, 5, -2, 3};int k =3;
    int s=lenOfLongestSubarr(arr,k);
    cout<<"largest size of subarray is :"<<s;


cout<<endl;
return 0;
}