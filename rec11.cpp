//APPROACH 2 : SWAPPING USE FOR PERMUTATION AND COMBINATIONS
// time complexity: O(n*n!)
// space complexity : O(n) 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
    void recurPermute(int index,vector<int> &nums,vector<vector<int>> &ans){
        if(index ==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            recurPermute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    public:
    vector<vector<int>> permute(vector <int> &nums){
        vector<vector<int>> ans;
        recurPermute(0,nums,ans);
        return ans;
    }
};



int main(){
    Solution obj;
    vector<int> v{1,2,3};
    vector< vector<int>> sum=obj.permute(v);
    cout<<"ALL PERMUTATIONS ARE:"<<endl;
    for(int i=0;i<sum.size();i++){
        for(int j=0;j<sum.size();j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }






cout<<endl;
return 0;
}   