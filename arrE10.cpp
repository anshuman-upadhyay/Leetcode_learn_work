#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int max=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count=0;
        }
        else{
            count++;
            if(max<=count){
                max=count;
            }
        }
    }
    return max;
    }
int main(){
    // vector<int> nums{1,1,0,1,1,1};
    vector<int> nums{1,0,1,1,0,1};
    int a=findMaxConsecutiveOnes(nums);
    cout<<"no of consecutive functions:"<<a;


cout<<endl;

return 0;
}