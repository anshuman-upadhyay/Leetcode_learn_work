#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,23,4,5,6};
    vector <int>::iterator it=v.begin();
    it++;
    cout<<*it<<"\n";
    for(vector <int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*it<<"\n";
    }
        v.erase(v.begin()+2);
        v.erase(v.begin()+2,v.begin()+4);
    for(auto& it:v){
    cout<<it<<"\n";
        }
    v.insert(v.begin()+2,300);
    v.resize(7);
    v.insert(v.begin()+4,30);//begin +4 means 5th
    // v.insert(v.begin()+6,23);//invalid pointer first increase the size then add new element into the vector 
    // v.insert(v.begin()+5,20);
    for(auto& it:v){
    cout<<it<<"\n";
        }
    v.clear();
    cout<<v.size();


}