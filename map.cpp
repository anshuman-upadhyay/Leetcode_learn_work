#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mpp;//uses key value pairs to store data 
    // key can be of any data type including pairs but has to be uniqur
    //eachkey is stored in a sorted order hence a tree is used to implement it 
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;


    mpp[1]=25;//key 1 stores 25
    mpp.emplace({3,4});
    mpp.insert({2,4});
    mpp({2,3})=10;
    for(auto it:mpp){
        cout<<it.first<<""<<it.second<<endl;
    }
    cout<<map[1];//gives out the value stored at the key 1
    cout<<map[5];//an absent key is returned with a NULL or 0
    auto it=map.find(3);//if the value is not here then returns mpp.end()
    cout<<*(it).second;

    //  multimap allows storing nonunique keys
    // UnorderedMap allows storing of unique keys in unsorted system

    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second<p2.second){
            return true;
        }
        else if(p1.second==p2.second){
            if(p1.first>p2.second) return true;
        }
        return false;
    }
    
}