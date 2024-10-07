#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    //precomp
    int hash[256]={0};
    for (int i =0;i<s.size();i++){
        hash[s[i]]++;

    }
    cout<<"enter how many elements to be searcher";
    int q;
    cin >>q;
    while (q--)
    {
        cout<<"enter the element to be searched";
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    




    return 0;
}
