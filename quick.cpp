#include<bits/stdc++.h>
using namespace std;
// divide and conquer algorithm
//same time complexity as merge sort O{nlogn}
// space complexity ==> O(1)
int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
        // cout<<"here is the error 30";
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){//  saare elements jo ki pivot se chote ya equal hai subko eak jagah leke aayega
            i++;
        }
        while(arr[j]>pivot && j>=low+1){// saare elements jo ki pivot se bare hai subko eak jagah leke aayega
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);}        // after every change in i and j if needed elements ko swap karega 
    }
        swap(arr[low],arr[j]);//pivot aur jth position element ko switch kar dega
        return j;
}
void qS(vector<int> &arr,int low,int high){
    if(low<high){
        // cout<<"here is the error 40";
        int pIndex=partition(arr,low,high);
        qS(arr,low,pIndex-1);
        qS(arr,pIndex+1,high);

    }
}
vector<int> quickSort(vector<int>arr){
    qS(arr,0,arr.size()-1);
    return arr;
}




int main(){
    vector<int>arr={4,6,2,5,7,9,1,3};
    int n =arr.size();
    cout<<"the array before quick sort"<<endl; 
    for(int i =0;i<arr.size();i++){
        // cout<<"here is the error 10";
        cout<<arr[i]<<" ";
    }
    arr=quickSort(arr);
    cout<<"the array after quick sort"<< endl;
    for(int i =0;i<arr.size();i++){
        // cout<<"here is the error 20";`
        cout<<arr[i]<<" ";
    }

cout<<endl;
return 0;
}
// steps to solve it : do it recursively
// first pick a pivot from any where in the given array: then place it in the correct place inthe array
// to figure out ki kaise pivot ko usski sahi jagah pe daale :
// 1. two variables low and high : array ke start aur end index pe
// 2. two pointers i,j : i at low and j at high
// 3. take the value of pivot and start comparing : arr[i]<pivot : i++
//                                                 arr[j]>pivot : j++
// 4.ab eak jaise hi pointers move karna band kiye swap arr[i] with arr[j]
// 5. eak point aaya jaha i&j cross karenge : thats the positon 
//    kyuki ab i ke aage saare value pivot se zada hai aur j ke aage ke saare elements pivot se chote hai 
// 6. replace the arr[pivot] with arr[j] : aur pivot ko sahi jagah laga ke eak partition bandiye hai 
// Second for the next numbers : comapre the elments to the pivot : if its smaller then put it in left else on right 
// perform recurcively to continue this sorting for entire arra