#include<bits/stdc++.h>
using namespace std;
// queue me bhi koi point nahi hai index instead this has FIFO:. normal traversal is not an option
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back()+=5;// adds the last guy with5
    cout<<q.back();
    cout<<q.front();
    q.pop();
    cout<<q.front();

    //size swap empty fxns same as stack 
// all these operations are happening in constant time



    return 0;
}