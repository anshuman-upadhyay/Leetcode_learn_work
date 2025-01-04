#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>&nums, int target) {
    // finally same soultion as bsE7 just changed the output index into true and change the condition to move the left and right
    int s=nums.size();
    int left=0;int right=s-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[left]==nums[mid] && nums[mid]==nums[right]){
            left=left+1;
            right=right-1;
            continue;
        }
        if(nums[left]<=nums[mid]){
            if(nums[left]<=target && target <= nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
    }
    return false;
}
int main(){
    // vector<int> nums{2,5,6,0,0,1,2};int target=0;
    vector<int> nums{2,5,6,0,0,1,2};int target=3;
    // vector<int> nums{1,0,1,1,1};int target=0;
    // vector<int> nums{1};int target=0;
    bool s=search(nums,target);
    cout<<s;

cout<<endl;
return 0;
}
//*brute force O(n)
    // int s=nums.size();
    // for(int i =0;i<s;i++){
    //     if(nums[i]==target){
    //         return true;
    //     }
    // }
    // return false;
//* bruter force O(nlogn)
// sort(nums.begin(),nums.end());
//     int s=nums.size();
//     int left=0;int right=s-1;
//     while(left<=right){
//         int mid=(left+right)/2;
//         if(nums[mid]<target){
//             left=mid+1;
//         }
//         if(nums[mid]>target){
//             right=mid-1;
//         }
//         if(nums[mid]==target){
//             return true;
//         }
//     }
//     return false;

        