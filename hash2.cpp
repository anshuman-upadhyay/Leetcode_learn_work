
#include<bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& nums, int k){
    vector<int>hash{0};
    int count=0;
    int max=*max_element(nums.begin(),nums.end());//gives out the max elment for future comaprison
    while(k!=0){
        for(int i =0;i<nums.size();i++){
                     if(nums[i]<max){
            nums[i]++;
        }
        }
        k--;
    }
    for (int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    int m=*max_element(hash.begin(),hash.end());
    return m;
    
}
int main(){
    // vector<int> arr{1,4,8,13};
    // int k=5;
    // vector<int> arr{1,2,4};
    // int k=5;
    vector<int> arr{3,6,9};
    int k=2;
    int n=maxFrequency(arr,k);
  cout<<n;
  cout<<endl;
}
// leetcode 1838