#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long n){
    long long a=n;
    long long sum=0;
    for(long long i =1;i<=a;i++){
        sum+=i*i*i;
    }
    return sum;
}


int main(){
    long long n;
    cin>>n;
    long long p=sumOfSeries(n);
    cout<<p<<" ";
    return 0;
}