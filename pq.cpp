#include<bits/stdc++.h>
using namespace std;
int main(){
// largest values stays on top 
// this is not any array or a simple linkedlist this is instead a tree thats being used here to maintain the top being the largest inputted value in the tree
    priority_queue<int> pq;//aka max heap
    pq.push(10);//tc o(logn)
    pq.push(1);
    pq.push(12);
    pq.push(4);
    cout<<pq.top();
    pq.pop();// tc o(logn)
    pq.pop();//pops the top of the queue ie the largest element 
    cout<<pq.top();//tc O(1)

// to create a priority queue with the minimum element at the top instead and the entire structure being the complete reverse
//
priority_queue<int,vector<int>,greater<int>> ss;//this is also known as min heap
ss.push(23);
ss.push(32);
ss.push(1);
ss.push(2);
ss.emplace(3);
// the concept of front and back are only there when the data str is linear and as this pq is a tree instead then emplace_front and emplace_back are invalid
// ss.emplace_front(4);
// ss.emplace_back(2);
cout<<ss.top();


    return 0;
}