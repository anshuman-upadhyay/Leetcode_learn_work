#include<bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> second;
    int max=0;
    int max2=0;
    int min=9999999;
    int min2=9999999;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min2=min;
            min=a[i];}
        else if(min2>a[i]&& a[i]!=min){
                min2=a[i];
            }
        
        if(max<a[i]){
            max2=max;
            max=a[i];
        }
        else if(max2<a[i] && a[i]!=max){
                max2=max;
                            }
        
    }
    second.push_back(min2);
    second.push_back(max2);
    return second;
}

int main(){
    // vector<int> a = {3,4,5,2};
    // int size =4;
    vector<int> a = {1 ,2 ,3 ,4 ,5, 6, 7, 8, 9, 10 };
    int size =10;
    vector<int> b=getSecondOrderElements(size,a);
    for(int i =0;i<b.size();i++){
        cout<<b[i]<<",";
    }

cout<<endl;
return 0;
}