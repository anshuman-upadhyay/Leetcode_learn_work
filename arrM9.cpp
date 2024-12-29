#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr) {
    int s=arr.size();
    int leader=INT_MIN;
    vector<int> ar;
    for(int i =s-1;i>=0;i--){
        if(arr[i]>=leader){
            leader =arr[i];
            ar.insert(ar.begin(),leader);
        }
    }
    return ar;
    }
int main(){
    // vector<int> arr{16, 17, 4, 3, 5, 2};
    // vector<int> arr{10, 4, 2, 4, 1};
    // vector<int> arr{5, 10, 20, 40};
    vector<int> arr{30, 10, 10, 5};
    vector<int> ans=leaders(arr);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

cout<<endl;
return 0;
}