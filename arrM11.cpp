#include<bits/stdc++.h>
using namespace std;
// todo : Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
void setZeroes(vector<vector<int>>& matrix) {
    //best solution:O(mn) and space O(1)
    // int cols[col]={0}; becomes matrix[0][something]
    // int rows[row]={0}; becomes matrix[somthing][0]
    int row=matrix.size();
    int col=matrix[0].size();
    int col0=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                //mark the ith row
                matrix[i][0]=0;
                //mark the jth col
                 if(j!=0){
                    matrix[0][j]=0;
                 }
                 else{
                    col0=0;
                 }
            }   
      }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(matrix[i][j]!=0){
                if(matrix[0][j]==0|| matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<col;j++){
            matrix[0][j]=0;
        }
    }
    
    if(col0==0){
        for(int i=0;i<row;i++){
            matrix[i][0]=0;
        }
    }
    




    }



int main(){
    // vector<vector<int>> matrix={
    //     {1,1,1},
    //     {1,0,1},
    //     {1,1,1}};
    vector<vector<int>> matrix={
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}};
    setZeroes(matrix);
    int rows =matrix.size();
    int cols =matrix[0].size();
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
    }
    


cout<<endl;
return 0;
}
 //brute 2:O(nm) and space O(m+n) due to extra arrays used
    // int row=matrix.size();
    // int col=matrix[0].size();
    // int cols[col]={0};
    // int rows[row]={0};
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //        if(matrix[i][j]==0){
    //         rows[i]=1;
    //         cols[j]=1;
    //        }
    //     }
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //        if(rows[i]==1|| cols[j]==1){
    //         matrix[i][j]=0;
    //        }
    //     }
    // }