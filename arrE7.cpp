#include<bits/stdc++.h>
using namespace std;
    bool searchInSorted(vector<int> arr, int k) {
        for(int i =0;i<arr.size();i++){
            if(arr[i]==k){
                return true;
                break;
            }

        }
        return false;
    }
int main(){
    // vector<int> arr={1,2,3,4,6}; int k =6;
    vector<int> arr={1,2,4,5,6};int k=3;
    // vector<int> arr={2,3,5,6};int k=1
    bool is_there=searchInSorted(arr,k);
    cout<<"The requested value presences is :"<<is_there;








cout<<endl;
return 0;
}