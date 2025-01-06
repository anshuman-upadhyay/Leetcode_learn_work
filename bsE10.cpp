#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr) {
    // striver's solution : nahi kiya dhang se ya wala solution 
  int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        //search space is already sorted
        //then arr[low] will always be
        //the minimum in that search space:
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return index;
        }

int main(){
    // vector<int> arr{5,1,2,3,4};
    // vector<int> arr{4,5,1,2,3};
    vector<int> arr{1,2,3,4,5};
    int c=findKRotation(arr);
    cout<<c;

cout<<endl;
return 0;
}
// brute force : O(n) directly returns the index
    // int s=arr.size();
    // for(int i=0;i<s;i++){
    //     if(arr[i]<arr[i-1]){
    //         return i;
    //     }
    // }
    // return 0;