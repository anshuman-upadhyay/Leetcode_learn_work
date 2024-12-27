#include<bits/stdc++.h>
using namespace std;
int pairWithMaxSum(vector<int> &arr) {
        int s=arr.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<s-1;i++){
            int j=i+1;
            sum=arr[i]+arr[j];
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }



int main(){
    // vector<int> arr={4, 3, 1, 5, 6};
    vector<int> arr={634, 377, 216, 826, 14 ,366, 895};
    // vector<int> arr={5, 4, 3, 1, 6};
    
    int c=pairWithMaxSum(arr);
    cout<<c;

cout<<endl;
return 0;
}