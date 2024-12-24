#include<bits/stdc++.h>
using namespace std;
//my solution
    void moveZeroes(vector<int>& nums) {
        int s =nums.size();

        for(int i =s-1;i>=0;i--){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
             
            }
        }
        for(int i =0;i<s;i++){
            cout<<nums[i]<<",";
        }
        cout<<"\n";

    }
int main(){
    vector<int> nums={0,1,0,3,12};
    // vector<int> nums={0};
    // vector<int> nums={0,0,1};
    moveZeroes(nums);
cout<<endl;
return 0;
}