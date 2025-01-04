#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0;int left=0;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;
        while(top<=bottom && left<=right){
            // top traversal left to right
            for(int j =left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            //traversal top to bottom in last col
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //traversal bottom row 
            if(top<=bottom){
                for(int j =right;j>=left;j--){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            //traversal left valid row
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

        }
        
        return ans;
 }
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=spiralOrder(matrix);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    cout<<endl;

cout<<endl;
return 0;
}