// to print 4321 recursively without adding a new input variable 
#include<bits/stdc++.h>
using namespace std;
void printNos(int N){
    int n=N;
    if(n<=0){
        return;
    }
    else{
        cout<<n<<" ";
        printNos(n-1);
    }

}
int main(){
    int n;
    cin>>n;
    printNos(n);
}