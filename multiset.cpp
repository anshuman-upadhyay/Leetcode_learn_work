#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>s;//a set with the ability to include repeated and non unique values as well  this also uses a balanced binary tree
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.erase(1);//erases every single one 
    s.erase(s.find(1));//erases only a single one
    s.erase(s.find(1),s.find(1)+2);
    // rest all fundtion same aa set

}