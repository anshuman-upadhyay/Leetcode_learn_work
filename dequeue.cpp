#include<bits/stdc++.h>
using namespace std;
int main(){
     deque<int> dq;
     dq.push_back(1);
     dq.emplace_back(3);
     dq.push_front(23);
     dq.emplace_front(23);
     for(auto& q:dq){
        cout<<q<<"\n";
     }
     dq.pop_back();
     dq.pop_front();
     dq.back();
     dq.front();
     for(auto& q:dq){
        cout<<q<<"\n";
     }
    //  all the other operations are same as vectors 

}