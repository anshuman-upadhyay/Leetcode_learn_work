#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
template<typename Func,typename... Args>
//this is the time measurement function
void measureExecutionTime(Func func, Args&&... args){
        auto start =chrono::high_resolution_clock::now();
        func(forward<Args>(args)...);
        auto stop =chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(stop-start);
         cout<<<<duration.count()<<<<endl;
    }
int main(){
cout<<endl;
return 0;
}