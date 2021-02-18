#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
    cin >> n;
    ll a[n+1];

    int f = 0;
    ll sum = 0;
    for (int i = 1; i < n+1; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i < n+1; i++)
    {
      sum = sum + a[i];
      ll need = (i * (i - 1)) / 2;
      if (sum < need)
      {
        f = 1;
        break;
      }
    }
     cout << f;
    if (f)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }
}
