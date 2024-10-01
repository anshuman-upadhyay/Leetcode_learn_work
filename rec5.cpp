#include<bits/stdc++.h>
using namespace std;
    vector<long long> factorialNumbers(long long n) {
            long long a=n;
    vector<long long> v;
    long long i;
    long long fact=1;
    for(i=1;i<=a;i++){
        fact=fact*i;
    if(fact<n){
        v.emplace_back(fact);
    }
    }
    return v;
    }
int main(){
    // cout>>"enter the upper limit numbers";
    long long n;
    cin>>n;
    vector<long long> v =factorialNumbers(n);
    for(auto& i:v){
        cout<<i<<" ";
    }
    return 0;
}