#include<bits/stdc++.h>
using namespace std;
int countFreq(vector<int>& arr, int target) {
    int s=arr.size();
    int count=0;
    for(int i=0;i<s;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;

    }
int main(){
    // vector<int> arr={1, 1, 2, 2, 2, 2, 3};int target=2;
    // vector<int> arr={1, 1, 2, 2, 2, 2, 3};int target=4;
    vector<int> arr={8, 9, 10, 12, 12, 12};int target=12;
    int c=countFreq(arr,target);
    cout<<c;

cout<<endl;
return 0;
}