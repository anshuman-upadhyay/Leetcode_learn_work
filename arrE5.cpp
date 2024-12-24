#include<bits/stdc++.h>
using namespace std;
// my solution bu time limit exceeded on the last test case
//this takes O[n.k]
void rotate(vector<int>& nums, int k) {
    int s=nums.size();

    while(k>0){
        int temp= nums.back();
        nums.pop_back();
        nums.insert(nums.begin(),temp);
        k--;
    }
    for(int i =0;i<s;i++){
        cout<<nums[i]<<",";
    }


}
// array reversal approach 
//this takes O(n)
void rotate(vector<int>& nums, int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.begin()+(n-k));//[4,3,2,1,5,6,7]
    reverse(nums.begin()+(n-k),nums.end());//[4,3,2,1,7,6,5]
    reverse(nums.begin(),nums.end());//[5,6,7,1,2,3,4]
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    // vector<int> nums={-1,-100,3,99};
    int k =3;
    // int k =2;
    rotate(nums,k);



cout<<endl;
return 0;
}