#include <bits/stdc++.h>
using namespace std;
vector<long long> factorialNumbers(long long n)
{
    vector<long long> v;
    long long i=1;
    long long fact = 1;
    for (fact = 1; fact <= n;fact= fact*i)
    {
        // final answer
        i++;
        v.emplace_back(fact);
    }
    return v;
}
int main()
{
    // cout>>"enter the upper limit numbers";
    long long n;
    cin >> n;
    vector<long long> v = factorialNumbers(n);
    for (auto &i : v)
    {
        cout << i << " ";
    }

    return 0;
}
        // attempt one
        // fact=fact*i;
        // fact = fact * i;
        // cout << "i am fact " << fact << "\n"; 
        // if (fact < n)
        // {
        //     v.push_back(fact);
        //     continue;
        // }
        // break;