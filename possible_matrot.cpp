#include<bits/stdc++.h>
using namespace std;
//todo: Determine Whether Matrix Can Be Obtained By Rotation
vector<vector<int>> transpose(vector<vector<int>>& mat){
    int s =mat.size();
    for(int i=0;i<s;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
            
        }
    }
    for(int i=0;i<s;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    return mat;
}
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int i =0;
    while(i<=3){
        transpose(mat);
        if(mat==target){
            return true;
        }
        i++;
    }
    return false;

    }
int main(){
    // vector<vector<int>> matrix={
    //     {0,1},
    //     {1,1}
    // };
    // vector<vector<int>> target={
    //     {1,0},
    //     {0,1}
    // };
    vector<vector<int>> matrix={
        {0,0,0},
        {0,1,0},
        {1,1,1}
    };
    vector<vector<int>> target={
        {1,1,1},
        {0,1,0},
        {0,0,0}
    };
    bool isit=findRotation(matrix,target);
    cout<<isit;
cout<<endl;
return 0;
}