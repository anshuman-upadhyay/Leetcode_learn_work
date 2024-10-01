#include<bits/stdc++.h>
using namespace std;
//reecursively print names n times
void printGfg(int N) {
    int n=N;
    if(n!=0){
        printGfg(n-1);
    }
    else{
        return;
    }
    cout<<"GFG ";
 }
int main(){
    int n;
    cin>>n;
    printGfg(n);

    return 0;
}