#include<bits/stdc++.h>
using namespace std;
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
    }

int main(){
    // vector<int> a={1,2,3,4,5};vector<int> b={1,2,3,6,7};
    vector<int> a={2, 2, 3, 4, 5};vector<int> b={1, 1, 2, 3, 4};
    // vector<int> a={1,1,1,1,1};vector<int> b={2,2,2,2,2};
    
    vector<int> c=findUnion(a,b);
    for(int i=0;i<sizeof(c);i++){
        cout<<c[i]<<" ";
    }
cout<<endl;
return 0;
}