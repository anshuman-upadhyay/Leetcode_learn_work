#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
   //better approach
   int s=nums.size();
   vector<int> ans(s,0);
   int pos=0;int neg=1;
   for(int i =0;i<s;i++){
    if(nums[i]>=0 && pos<s){
        ans[pos]=nums[i];
        pos+=2;
    }
    if(nums[i]<0 && neg<s){
        ans[neg]=nums[i];
        neg+=2;
    }
   }
   nums=ans;
   return nums;

}

int main(){
    // vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> nums={-1,1};
    cout<<"before :"<<endl;
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
    vector<int> nums1=rearrangeArray(nums);
    cout<<endl;
    cout<<"After :"<<endl;
    for(int i =0;i<nums1.size();i++){
        cout<<nums[i]<<",";
    }

cout<<endl;
return 0;
// vector<int> rearrangeArray(vector<int>& nums) {
//     // brute force attempt : its correct but very little optimised
//     int s=nums.size();
//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0;i<s;i++){
//         if(nums[i]>=0){
//             pos.push_back(nums[i]);
//         }
//         else{
//             neg.push_back(nums[i]);
//         }
//     }
//     nums.clear();
//     int i=0;int j=0;
//     while( i <s/2 && j<s/2){
//         nums.push_back(pos[i]);
//         nums.push_back(neg[j]);
//         i++;
//         j++;
//     }
//     cout<<endl;
//     return nums;
        
// }
}