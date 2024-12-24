#include<bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& nums) {
        //seen solutions
     int s=nums.size();  
     int count =0;
     int elemaj=0;
     for(int i =0;i<s;i++){
        if(count==0){
            elemaj=nums[i];
        }
        else if(elemaj==nums[i]){
            count++;
        }
        else{
            count-=1;
        }
     }
     return elemaj;
    }


int main(){
    vector<int> nums={3,2,3};
    // vector<int> nums={2,2,1,1,1,2,2};
    int c=majorityElement(nums);
    cout<<c;



cout<<endl;
return 0;
}
// attempt1 :using hashing vector
        // space error 
        // int s= nums.size();
        // int p;
        // int max=0;
        // int max2=0;
        // for (int i =0;i<s;i++){
        //     if(max<nums[i]){
        //         max=nums[i];
        //     }
        // }
        // vector<int> hash(max,0);
        // for (int i =0;i<s;i++){
        //     hash[nums[i]]++;
        //      if(max2<hash[p]){
        //     max2=hash[p];
        //    }
        // }
        // return p-1;





    // attempt 2 : dual loop (brute force)
    // passed!?
    // int majorityElement(vector<int>& nums) {
    //     int s=nums.size();
    //     for(int i =0;i<s;i++){
    //     int count =0;
    //         for(int j=0;j<s;j++){
    //             if(nums[i]==nums[j]){
    //                 count++;
    //             }
    
    //         }
    //     if(count>s/2){
    //         return nums[i];
    //     }

    // }
    // return 0;
    // }