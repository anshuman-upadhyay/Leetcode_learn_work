#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
//binary search approach
int s=nums.size();
    int left=0;int right=s-1;
    while(left<=right){
        int mid =(left+right)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if (nums[mid]>target){
            right =mid-1;
        }
        else{
            return mid;
        }

    }
    return -1;
    }
int main(){
    // vector<int> nums={-1,0,3,5,9,12};int target=9;
    // vector<int> nums={5};int target=5;
    // vector<int> nums={-1,0,3,5,9,12};int target=2;
    vector<int> nums={1 ,2 ,3 ,4, 5, 6 ,7};int target=9;
    
    int c=search(nums,target);
    cout<<c;
    
cout<<endl;
return 0;
}
// brute force linear solution 
    // int s=nums.size();
    // int left=0;
    // int right=s-1;
    // for(int i =0;i<s;i++){
    //     if(nums[i]==target){
    //         return i;
    //     }

    // }
    // return -1;