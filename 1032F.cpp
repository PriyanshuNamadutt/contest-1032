#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll solve( vector<ll> &arr , ll s ) {
    int m = arr.size();
    if ( m == 0 ) return 0;
    ll cnt = 0;
    ll sum = 0;
    unordered_map<ll,ll> mp;
    mp[0] = 1;
    for ( int i = 0; i < m; i++ ) {
        sum += arr[i];
        cnt += mp[sum - s];
        mp[sum]++;
    }

    return cnt;
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int  n; cin >> n;
        ll s, x;
        cin >> s >> x;
        vector<ll> a(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];

        vector<ll> arr;
        ll ans1 = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] > x ) {
                ans1 += solve( arr , s );
                arr.clear();
            }
            else arr.push_back(a[i]);
        }

        ans1 += solve( arr , s );
        arr.clear();
        ll ans2 = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] >= x ) {
                ans2 += solve( arr , s );
                arr.clear();
            }
            else arr.push_back(a[i]);
        }
        ans2 += solve( arr , s );

        cout << ans1 - ans2 << endl;
    }
    return 0;
}
