#include<bits/stdc++.h>
// buy and sell stoks 
using namespace std;
int maxProfit(vector<int>& prices) {
        // approach 2 : seen solution
        int s=prices.size();
        int maxPro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<s;i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);

        }
        return maxPro;
    }
int main(){
    vector<int> prices={7,1,5,3,6,4};
    // vector<int> prices={7,6,4,3,2,1};
    // vector<int> prices={2,4,1};
    // vector<int> prices={3,2,6,5,0,3};
    int mp=maxProfit(prices);
    cout<<mp;


cout<<endl;
return 0;
}

//approach 1 : take the date with least price take and start from it to the end of the array and get the largest profit 
//doesnt work if the lowest is near the end but the highest can be achieved from 2nd largest 
// int s=prices.size();
//         int bought;
//         int least=INT_MAX;
//         int profit =INT_MIN;
//         int bought_date;
//         for(int i=0;i<s;i++){
//             if(least>prices[i]){
//                 least=prices[i];
//                 bought_date =i;
//             }
//         }
        
//         for(int i =bought_date;i<s-1;i++){
//             int value= prices[i+1]-prices[bought_date];
//             if(profit<value){
//                 profit=value;
//             }
//             else {value=0;}
//         }
//         if(profit>=1){
//             return profit;
//         }

//         return 0;