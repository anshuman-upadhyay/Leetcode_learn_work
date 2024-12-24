#include<bits/stdc++.h>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int s=nums.size();
        int j=0;
        for(int i=0;i<s;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
     }

    
int main(){
    // vector<int> nums{1,1,2};
    // vector<int> nums{1,1};
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout<<"before"<<endl;
        for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
    int flen=removeDuplicates(nums);
    cout<<"size: "<<flen<<endl;
    cout<<"After"<<endl;
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
cout<<endl;
return 0;
}