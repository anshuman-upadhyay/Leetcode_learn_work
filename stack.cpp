#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    // in stack there are only 3 genreic finctions push pop and top (other than l fxns like clear empty etc)
    // there is no concept of index in stack its only LIFO
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.emplace(5);
    // cout<<st.top();
    // st.pop();
    // cout<< st.top();
    // cout<< st.size();
    // cout<< st.empty();
   
    stack<int> st1;
    stack<int> st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    // as there are no index we cant traverse using the following method it gives error
    // for(auto& s:st1){
    //     cout<<s<<"\n";
    // }
    // st1.swap(st2);
    // for(auto& s:st2){
    //     cout<<s<<"\n";
    // }


    return 0;

}