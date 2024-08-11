#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr){
    int n= arr.size();
    int index =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    vector<int> arr = {1,0,2,3,0,5,6,8,1,0};
    moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}