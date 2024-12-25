#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int s=nums.size();
    int sum=0;
    int max1=INT_MIN;
    for(int i=0;i<s;i++){
        sum+=nums[i];
        max1=max(max1,sum);
        if(sum<0){
            sum=0;
        }
    }
    return max1;
    }
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums={1};
    // vector<int> nums={5,4,-1,7,8};
    int c= maxSubArray(nums);
    cout<<c;


cout<<endl;
return 0;
}