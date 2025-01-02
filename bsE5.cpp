#include<bits/stdc++.h>
using namespace std;
// todo :Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// todo :If target is not found in the array, return [-1, -1]
// todo :You must write an algorithm with O(log n) runtime complexity.
 vector<int> searchRange(vector<int>& nums, int target) {
    //best solution : 2 binarysearches for each first and last element 
    int s=nums.size();
    int first=-1;int last=-1;
    int left=0;int right=s-1; 
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
                first=mid;
                right=mid-1;//eleminates the entire right half to get to the first occurence 
            
            
        }
    }
    left=0;right=s-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
                last=mid;
                left=mid+1;//eleminates the entire lower section to find the last occurence
    }
    }

    return {first,last};
    }
    
int main(){
    vector<int> nums={5,7,7,8,8,10};int target=8;
    // vector<int> nums={5,7,7,8,8,10};int target=6;
    // vector<int> nums={};int target=0;
    // vector<int> nums={2,2};int target=2;
    // vector<int> nums={1};int target=1;
    vector<int> ans=searchRange(nums,target);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    
cout<<endl;
return 0;
}

