#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
     int len = sizeof(n);
    for(int i=0;i<=len;i++){
        cin>>arr[i];
    }

    for(int i=len;i>=0;i--){
        cout<<arr[j]<<" ";
    }
    return 0;

}
