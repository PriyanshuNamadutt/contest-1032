#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
        }

        if ( s >= a[n-1] ) cout << abs( s - a[0] ) << endl;
        else if ( s <= a[0] ) cout << abs( a[n-1] - s ) << endl;
        else cout << min( s - a[0] , a[n-1] - s ) + a[n-1] - a[0] << endl;
    }
    return 0;
}
