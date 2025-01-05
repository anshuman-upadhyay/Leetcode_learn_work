#include<bits/stdc++.h>
using namespace std;
//todo:Subarray Sum Equals K
int subarraySum(vector<int>& nums, int k) {
    int s=nums.size();
    int count=0;
    for(int i =0;i<s;i++){
        int sum=0;
        for(int j=i;j<s;j++){
            sum+=nums[j];
            if(sum==k){
                count++;
            }
        }
    }
   return count;
    }
int main(){
    vector<int> nums ={1,1,1};int k=2;
    // vector<int> nums ={1,2,3};int k=3;
    int ans=subarraySum(nums,k);
    cout<<ans;

cout<<endl;
return 0;
}
// approach 1: using a hash array that stores the new sum (space error)
//  int s=nums.size();
//     int count=0;
//     vector<int> hash;
//     for(int i=0;i<s;i++){
//         int sum=0;
//         for(int j =i;j<s;j++){
//             sum+=nums[j];
//             hash.push_back(sum);
//         }
//     }
//     for(int i =0;i<hash.size();i++){
//        if(hash[i]==k){
//         count++;
//        }
//     }

//     return count;