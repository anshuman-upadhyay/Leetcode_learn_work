#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int row=matrix.size();
    int col=matrix[0].size();
    //given matrix ka transpose bana diye 
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
            
        }
    }
    // transposed matrix ka saara rows ko reverse kar diye
    for(int i=0;i<row;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    cout<<endl;
        
    }
int main(){
    vector<vector<int>> matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // vector<vector<int>> matrix={{15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}};
    cout<<"before"<<endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(matrix);
    cout<<"after"<<endl;
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
    }

cout<<endl;
return 0;
}