#include<bits/stdc++.h>
using namespace std;
int main(){
    int he[6]={13,46,24,52,20,9};
    
    for(int i =0;i< size(he);i++){
        int min=he[i];
        for(int j=i;j<=size(he)-1;j++){
            if(min>he[j]){
                he[i]=he[i]^he[j];
                he[j]=he[i]^he[j];
                he[i]=he[i]^he[j];
            }
        }
    }
    for(int i=0;i<size(he);i++){
         cout<<he[i]<<",";
    }





    cout<<endl;
    return 0;
}