// 1752. Check if Array Is Sorted and Rotated
#include<bits/stdc++.h>
using namespace std;
    bool check(vector<int>& nums) {
        int count=0;
         int size=nums.size();
       for (int i=0;i<nums.size()+1;i++ ){
        if(nums[i]>nums[(i+1)%size]){
            count++;
        }
       }
        cout<<count;
        if( count >1){
            return false;
        }
        else{
            return true;
        }
       }
    
    

int main(){
    vector<int> nums{2,1,3,4};
    // vector<int> nums{3,4,5,1,2};
    // int size= sizeof(nums)/sizeof(nums[0]); for some reason galat answer de raha hai
   bool rot=check(nums);
   if(rot==0){
    cout<<"False";
   }
   else{
    cout<<"True";
   }
    
cout<<endl;
return 0;
}