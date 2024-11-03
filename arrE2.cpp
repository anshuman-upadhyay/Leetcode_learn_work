#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr){//better but not optimal its O(2n)
    int max=arr[0];
    int max1=-1;
    for(int i =0;i<arr.size();i++){
        if(max<arr[i]){
            max=arr[i];
        }   
    }
    for(int i =0;i<arr.size();i++){
                if(max1<arr[i] && arr[i]!=max){
            max1=arr[i];
        }   
    }
    if(max==max1){
        return -1;
    }
    else{
        return max1;
    }
}
int main(){
    vector<int> a{12, 35, 1,14, 10, 34, 1};
    int sec=getSecondLargest(a);
    cout<<sec;
cout<<endl;
return 0;
}
//better solution
