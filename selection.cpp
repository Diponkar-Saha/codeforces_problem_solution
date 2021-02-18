#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,t;

	cin >> n>> t;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	for(int i=0;i<t;i++)
        {
           int index=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[index]>arr[j]){
                index=j;
           }
        }
        swap(arr[index],arr[i]);
	}
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
	}
	 return 0;
}
