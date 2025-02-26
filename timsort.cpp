#include <bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
const int RUN=32;//Small chunk size for Insertion Sort


//function for Exectution time calculation
template<typename Func,typename... Args>
void measureExecutionTime(Func func, Args&&... args){
    auto start =chrono::high_resolution_clock::now();

    func(forward<Args>(args)...);
    
    auto stop =chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop-start);
    cout<<"Execution time :"<<duration.count()<<" NanoSeconds"<<endl;
}


//Insertion Sort for small chunks
void insertionSort(vector<int> & arr,int left,int right){
    for(int i=left+1;i<=right;i++){
        int key= arr[i];
        int j=i-1;
        while(j>=left && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void merge(vector<int> &arr,int left,int mid,int right){
    vector<int> leftPart(arr.begin()+left,arr.begin()+mid+1);
    vector<int> rightPart(arr.begin()+mid+1,arr.begin()+right+1);
    int i=0,j=0,k=left;
    while(i<leftPart.size() && j<rightPart.size()){
        arr[k++]= (leftPart[i]<rightPart[j]) ? leftPart[i++] : rightPart[j++];
    }

    while(i < leftPart.size()) arr[k++]= leftPart[i++];
    while(j < rightPart.size()) arr[k++]= rightPart[j++];
}

void timSort(vector<int> &arr){
    int n=arr.size();
    //step1 : sort small subarrays using Insertion sort
    for (int i =0;i<n;i+=RUN){
        insertionSort(arr,i,min(i+RUN-1,n-1));
    }

    //step2 : Merge runs using Merge Sort
    for(int size=RUN;size<n;size*=2){
        for(int left= 0;left<n;left +=2*size){
            int mid =min(left+size -1,n-1);
            int right= min(left+2*size-1,n-1);

            if(mid<right){
                merge(arr,left,mid,right);
            }
        }
    }

}


int main(){
    vector<int> arr={65,43,6,2,2456,1,765,3};
    cout<<"Original Array";
    for(int num: arr)cout<< num<<" ,";
    cout<<endl;
    //measureExecutionTime(timSort(arr)) : this doesnt work because timSort function time measuring ke phele hi execute ho jayega leading to waste
    //the way to solve this is using the lambda function jisko pass kar sakte hai timemeasuring function me 
    //here [&] : ensures ki exact values hi pass ho instead of copies
    //({timSort(arr);}) : ye eak nameless function(lambda) hai jo time measure ko behave pe timSort() ko usske correct order me pass karta hai
    //hum same cheeze eak separate void and no args function bana ke kar sakte hai but ye better method hai
    measureExecutionTime([&](){timSort(arr);});
    cout<<"\n Sorted Array:";
    for(int num: arr)cout<<num<<" ,";
    cout<<endl;

    cout<<endl;
    return 0;
}