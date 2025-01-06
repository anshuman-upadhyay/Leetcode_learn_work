#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
    int s=nums.size();
    int left=0;int right=s-1;int mid;
    int ans=INT_MAX;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[left]<=nums[mid]){
            ans=min(nums[left],ans);
            left=mid+1;
        }
        else{
            ans=min(ans,nums[mid]);
            right=mid-1;
        }
    }
    return ans;






    }
int main(){
    vector<int> nums{3,4,5,1,2};
    // vector<int> nums{4,5,6,7,0,1,2};
    // vector<int> nums{11,13,15,17};
    int c=findMin(nums);
    cout<<c;

cout<<endl;
return 0;
}
//brute force : sort and give out the smallest number: O(nlong)
    // int s=nums.size();
    // sort(nums.begin(),nums.end());
    // return nums[0];
// better solution : O(n)       
    // int s=nums.size();
    // int min=INT_MAX;
    // for(int i =0;i<s;i++){
    //     if(min>nums[i]){
    //         min=nums[i];
    //     }
    // }
    // return min;