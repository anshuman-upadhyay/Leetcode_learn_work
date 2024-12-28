#include<bits/stdc++.h>
using namespace std;
//  arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
void nextPermutation(vector<int>& nums) {
    int s=nums.size();
    // step 1 : figure out the break point 
    int breakp=-1;// gives a break point : jaha par ith element ki value i+1 se kam jo
    for(int i=s-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            breakp=i;// searches for the break point on the array and stores its index
            break;
        }
    }
    //if break point doesnt exists then reverse the entire array
    if(breakp==-1){
        reverse(nums.begin(),nums.end());
        return ;
    }
    // step 2 : we will try to take another element that is greater than the break point only (2nd smallest)
    for(int i=s-1;i>breakp;i--){
        if(nums[i]>nums[breakp]){
            swap(nums[i],nums[breakp]);
            break;
        }
    }
    // step 3: reverse the right half 
    reverse(nums.begin()+breakp+1,nums.end());


    
    }
int main(){
    vector<int> nums={1,2,3};
    // vector<int> nums={3,2,1};
    // vector<int> nums={1,1,5};
     cout<<"before :"<<endl;
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
    nextPermutation(nums);
    cout<<endl;
    cout<<"After :"<<endl;
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
    
    


cout<<endl;
return 0;
}
//approach cheap : apparently there is a c++ stl librabry particularly for this problem of finding the next permutation 
//does the same thing the answer is correct but mun nahi maan raha 
// void nextPermutation(vector<int>& nums) {
//     next_permutation(nums.begin(),nums.end());
// }
