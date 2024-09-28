#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int >s;//stores everything in a sorted manner ans stores only unique values
    // a set maintains an entire tree for storing data
    s.insert(1);
    s.insert(2);
    s.emplace(4);
    s.emplace(3);
    s.insert(3);
    s.emplace(5);
    //auto will give a pointer as the iterator that points to the tree
    auto it1=s.find(3);
    // if the element is not in the set it always returns set.end()
    auto it3=s.find(6);
    s.erase(3);//erases the 3 and maintains the sorted order (takes logaritmic time)
    int cnt=s.count(1);//if the elemeent is presenet then returns 1 else 0
    auto it12 =s.find(2);
    auto it22=s.find(5);
    s.erase(it12,it22);//erases the elements from it1 to it2-1 and not it2
    auto ita=s.lower_bound(2);
    auto itb=s.upper_bound(3);



    return 0;
}