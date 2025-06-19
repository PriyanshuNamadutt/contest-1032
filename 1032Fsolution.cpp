#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        ll s, x;
        cin >> s >> x;
        vector<ll> a(n);
        vector<ll> sum(n+1,0);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
            sum[i+1] = sum[i] + a[i];
        }
        unordered_map<ll,ll> mp;
        ll cnt = 0;
        int j = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] > x ) {
                mp.clear();
                j = i+1;
            }
            else if ( a[i] == x ) {
                while ( j <= i+1 ) {
                    mp[sum[j]]++;
                    j++;
                }
            }
            cnt += mp[sum[i+1]-s];
        }
        cout << cnt << endl;
    }
    return 0;
}
