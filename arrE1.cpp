//Largest element 
#include<bits/stdc++.h>
using namespace std;
int largest(vector <int > &arr){
        int max=0;
    for(int i =0;i<arr.size();i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}



int main(){
    vector<int> a{1, 8, 7, 56, 90};
    int max=largest(a);
    cout<<max;

cout<<endl;
return 0;
}