#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll n;
            cin>>n;
            ll arr[n+1];
            for(ll i=1;i<=n;i++){
                cin>>arr[i];
            }
            for(ll i=n;i>=1;i--){
                cout<<arr[i]<<" ";

            }
              cout<<endl;
    }
     return 0;
}
