#include<bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     // usinf hash map
//     int s=nums.size();
//     vector<int> ans;
//     map<int,int> hash;// stores the index and summed up element
//     for(int i =0;i<s;i++){
//         int a =nums[i];
//         int more= target -a;
//         if(hash.find(more)!=hash.end()){
//             ans.insert(ans.begin(),hash[more]);
//             ans.insert(ans.begin(),i);
//             break;
//         }
//         hash[a]=i;
//     }
//     return ans;
//     }
vector<int> twoSum(vector<int>& nums, int target) {
    // using 2 pointer;
    //works only on sorted arrays 
    vector<int> ans;
    int s=nums.size();
    int left=0;
    int right=s-1;
    while(left<right){
        if(nums[left]+nums[right]<target){
            left++;
        }
        else if(nums[left]+nums[right]>target){
            right--;
        }
        else{
            ans.push_back(left);
            ans.push_back(right);
            break;
        }
    }
    return ans;
    }
int main(){
    vector<int> nums ={2,7,11,15};int target=9;
    // vector<int> nums ={3,2,4};int target=6;
    
    vector<int> ans=twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

cout<<endl;
return 0;
}