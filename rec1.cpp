#include<bits/stdc++.h>
using namespace std;
//to do this recursively 
    int num=0;
void printNos(int N){
    int n=N;
    if(num>=n){
        return;
    }
    else{
        printNos(n-1);
        num++;
    }
        cout<<num;

}

int main(){
    int N;
    cin>>N;
    printNos(N);
    

    return 0;
}