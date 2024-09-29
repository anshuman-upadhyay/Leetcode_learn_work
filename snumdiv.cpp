#include<bits/stdc++.h>
using namespace std;
// Input:
// N = 4
// Output:
// 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15
long long sumOfDivisors(int N){
        //online solution somehow in O(n)
        int n=N;
        long sum=0;
        for(int i =1;i<=n;i++){
            sum+=(n/i)*i;
            cout<<sum<<endl;
        }
        return sum; 
        // // my solution takes O(n2)
        // int sum, n=N;//this is the number of f we need to run
        // int ans=0;
        // for(int i=1;i<=n;i++){
        //             sum=0;
        //     for(int j=1;j*j<=i;j++){
        //         if(i%j==0){
        //             sum+=j;
        //         }
        //             cout<<sum<<endl;
        //     }
        //     ans+=sum;
        // }
        // return ans;
        //geekforgeek sol O(n*sqrt(n))
        //         long long sum = 0;

        // for (int i = 1; i <= N; ++i) {

        //     // Find all divisors of i and add them
        //     for (int j = 1; j * j <= i; ++j) {
        //         if (i % j == 0) {
        //             if (i / j == j)
        //                 sum += j;
        //             else
        //                 sum += j + i / j;
        //         }
        //     }
        // }

        // return sum;

    }
int main(){
    int N;
    cin>>N;
    int c=sumOfDivisors(N);
    cout<<c;
    
}