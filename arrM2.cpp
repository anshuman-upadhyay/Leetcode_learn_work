#include<bits/stdc++.h>
using namespace std;
    void sortColors(vector<int>& nums) {
        //final solution :using two pointers to take start and end point and taking a 3rd ptr to switch elements 
        //  attempt 1 jaisa hi hai bas instead of remove and add we are swapping this
        int s=nums.size();
        int low=0, mid=0;
        int high = s-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
           else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                    // mid++;
                    high--;
                
            }
            
        }

    }
int main(){
    vector<int> nums={2,0,2,1,1,0};
    // vector<int> nums={2,0,1};
    // vector<int> nums={1,2,0};
    cout<<"Before\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }
    cout<<"\nAfter\n";
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<",";
    }

cout<<endl;
return 0;
}


//* attempt 1 : wrong answer at [1,0,2]
        //         int s=nums.size();
        // for(int i =0;i<s;i++) {
        //     if(nums[i]==0){
        //         nums.erase(nums.begin()+i);
        //         nums.insert(nums.begin(),0);
        //     }
        //     else if(nums[i]==1){
        //         nums.erase(nums.begin()+i);
        //         nums.insert(nums.begin()+i,1);
                
        //     }
        //     else{
        //         nums.erase(nums.begin()+i);
        //         nums.push_back(2);
        //     }
        // }



//* attempt 2: bekar attempt 
    //     vector<int> hash(s);
    //     int left=0;
    //     int right=s-1;
    //     while(left<right){
    //         if(nums[left]==0){
    //             nums.erase(nums.begin()+left);
    //             hash.insert(hash.begin(),0);
    //         }
    //         if(nums[right]==0){
    //             nums.erase(nums.begin()+right);
    //             hash.insert(hash.begin(),0);
    //         }
    //         if(nums[left]==1){
    //             nums.erase(nums.begin()+left);
    //             hash.insert(hash.begin()+left,1);
    //         }
    //         if(nums[right]==1){
    //             nums.erase(nums.begin()+right);
    //             hash.insert(hash.begin()+right,1);
    //         }
            
    //         if(nums[left]==2){
    //             nums.erase(nums.begin()+left);
    //             hash.insert(hash.end(),2);
    //         }
    //         if(nums[right]==2){
    //             nums.erase(nums.begin()+right);
    //             hash.insert(hash.end(),2);
    //         }
    //         right--;
    //         left++;
    //     }
    //     for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<",";
    // }