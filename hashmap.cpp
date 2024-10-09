#include<bits/stdc++.h>
using namespace std;
//the size limit of 10^7 we maps or unordered map to perform hashing 
// the key is the type value to be stored and the value is the frequency of its ioccurence
// since we are directly storing the element itself in the map unlike array humko extra elements jo exist nahi karte hai usko space dene ka bhi need nahi hota hai thus making efficient memory usage
int main(){
    cout<<"enter the number of element in the arrar\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        // cout<<"enter the th number"<<i;
        printf("enter the %dth element",i);
        cin>>arr[i];
    }
    map<int,int> map;
    for(int i =0;i<n;i++){
        map[arr[i]]++;
    }
    //this is how we can iterate in a map nbut cannot enter a value into the map through this methof
    for(auto it:map){
        cout<<it.first<<"->";
    }
    cout<<"enter the no of elemtny to be searched";

    int q;
    cin>>q;
    while(q--){
    cout<<"enter the elementto be searched";
        int nu;
        cin>>nu;
        // fetch
        cout<<map[nu]<<endl;

    }






    return 0;
}
// in map any data structure including pair<int,int> can act as a key 
// where as in unordered map the key can only be a single value and pairs aew not allowed

// when using the unordered map the time complexity in best and worst case is O(1) in very minor case the worst case will be O(N) this is because internal collisions(as explained above) only in that case ordered maps are preffered
// 