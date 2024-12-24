#include<bits/stdc++.h>
using namespace std;
// to be completed in O(n) time and O(1) space
//for XOR we know a^a=0 and 0^a=a
int singleNumber(vector<int>& nums) {
    int x=0;
    for(int i=0;i<nums.size();i++){
        x=x^nums[i];
    }
    return x;

}

int main(){
    vector<int> nums{2,2,1};
    // vector<int> nums{4,1,2,1,2};
    // vector<int> nums{1};
    int output=singleNumber(nums);
    cout<<"The required single is:"<<output<<"\n";


cout<<endl;
return 0;
}