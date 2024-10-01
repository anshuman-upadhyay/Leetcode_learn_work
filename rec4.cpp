#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long n) {
    long long i=n;
    long long sum=0;
    if(i<1){
        return sum;
    }
    else{
        int w=sumOfSeries(i-1)
        sum+=w*w*w;  
    }
       
}

int main(){
    long long n;
    cin>>n;
    int n=sumOfSeries(n);
    return 0;
}