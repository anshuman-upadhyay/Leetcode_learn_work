#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int s=nums.size();
    vector<int> arr(s+1,0);// creates a vector of defined length along all elements defines as 0
    int j;
    for(int i=0;i<s;i++){
        arr[nums[i]]++;
    }
    for(j=0;j<s+1;j++){
        if(arr[j]==0){
            break;
        }
    }
    return j;

    }

int main(){
    // vector<int> nums={3,0,1};
    // vector<int> nums={0,1};
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    int m=missingNumber(nums);
    cout<<"The missing number is :"<<m;
cout<<endl;
return 0;
}