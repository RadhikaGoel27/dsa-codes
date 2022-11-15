#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
			min=j;
		}
	swap(arr[min],arr[i]);
	}
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	for (int i=0; i<n;i++)
	cout<<arr[i]<<" ";
}
