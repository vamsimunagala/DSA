#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr [],int n){
	int i,j,temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int n=6;
	int arr [] ={23,78,907,9,88,109};
	bubblesort(arr,n);
	cout<<"after sorting"<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}