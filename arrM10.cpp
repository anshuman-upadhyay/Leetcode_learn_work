#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int>&a) {
    int s= a.size();
    int max=INT_MIN;
    int mlen=INT_MIN;
    int count =0;
    for(int i =0;i<s;i++){
        if(max<=a[i]){
            max=a[i];
        }
    }
    cout<<max<<endl;
    vector<int> hash(s+1,0);
    for(int i =0;i<max;i++){
        hash[a[i]]++;
    }

    for(int i=0;i<hash.size();i++){
        cout<<hash[i];
        if(hash[i]>0){
            count++;
        }
        if(hash[i]==0 && mlen>count){
            mlen=count;
            count=0;
        }
    }
    return mlen ;
}
int main(){
    vector<int> a{5, 8, 3, 2, 1, 4};
    int size=longestSuccessiveElements(a);
    cout<<size;

cout<<endl;
return 0;
}