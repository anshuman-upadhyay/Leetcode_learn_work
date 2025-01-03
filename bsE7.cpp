#include<bits/stdc++.h>
using namespace std;
// todo : leetcode : 33 (search elements in rotated list)
int search(vector<int>& nums, int target) {
        int s=nums.size();
        int index=-1;
        int left=0;int right=s-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target && target<=nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target <=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }

        }
        return -1;
    }

int main(){
    vector<int> nums={4,5,6,7,0,1,2};int target=0;
    // vector<int> nums={4,5,6,7,0,1,2};int target=3;
    // vector<int> nums={1};int target=0;
    int id=search(nums,target);
    cout<<id;
cout<<endl;
return 0;
}