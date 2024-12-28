#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int s=nums.size();
    int left=0;int right=s-1;
    int mid;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
                return mid;
            
        }
    }
    return left;

    }
int main(){
    // vector<int> nums{1,3,5,6};int target =5;
    // vector<int> nums{1,3,5,6};int target =2;
    vector<int> nums{1,3,5,6};int target =7;
    int c=searchInsert(nums,target);
    cout<<c<<endl;
cout<<endl;
return 0;
}