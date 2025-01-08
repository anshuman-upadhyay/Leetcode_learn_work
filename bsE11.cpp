#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
    int s =nums.size();
    int left=1;int right=s-2;
    if(s==1){
        return nums[0];
    }
    if(nums[0]!=nums[1]){return nums[1];}
    if(nums[s-1]!=nums[s-2]){return nums[s-1];}
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid] != nums[mid-1]){
            return nums[mid];
        }
        if((mid %2 ==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
            left=mid+1;
        }
        else{
            right=mid-1;
                    }

    }
    return -1;
}

int main(){
    // vector<int> nums{1,1,2,3,3,4,4,8,8};
    vector<int> nums{3,3,7,7,10,11,11};
    int c=singleNonDuplicate(nums);
    cout<<c;

cout<<endl;
return 0;
}
// basic brute force is just to run 2 loops and hold a count for every element but this is O(n2) time and O(1) space
// next is to maintain a hash array : 2*O(n) time and space:O(n)