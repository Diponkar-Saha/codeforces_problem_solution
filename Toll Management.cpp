#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mx = 1e6+123;
ll phi[mx];
ll r[mx];


int main()
{

    int lim = 1e6;
    for ( int i = 1; i <= lim; i++ ) phi[i] = i;
    for ( int i = 2; i <= lim; i++ ) {
        if ( phi[i] == i ) {
            for ( int j = i; j <= lim; j += i ) {
                phi[j] /= i;
                phi[j] *= ( i-1 );
            }
        }
    }

    for ( int i = 1; i <= lim; i++ ) {
        for ( int j = i; j <= lim; j += i ) {
            r[j] += phi[i] * i;
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        ll ans = r[n] + 1;
        ans *= n;
        ans /= 2;

        cout << ans << endl;
    }






	return 0;
}
