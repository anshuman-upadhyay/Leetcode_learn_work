#include<bits/stdc++.h>
using namespace std;
// list is a dynamic container that is identical to vector but list also allows us to perform the  frontal updation cheaply(time complexity wise)
int main(){
     list<int> ls;
     ls.push_back(2);
     ls.emplace_back(23);
     ls.push_front(3);
     ls.emplace_front();
     for(auto& l:ls){
          cout<<l<<"\n";
     }

// rest all the functions are same for vectors and list
}