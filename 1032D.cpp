#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a(n) , b(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];
        for ( int i = 0; i < n; i++ ) cin >> b[i];

        vector<pair<int,int>> ans;
        for ( int i = 0; i < n-1; i++ ) {
            for ( int j = 0; j < n - 1 - i; j++ ) {
                if ( a[j] > a[j+1] ) {
                    swap( a[j] , a[j+1] );
                    ans.push_back( {1,j+1} );
                }
            }
        }
        for ( int i = 0; i < n-1; i++ ) {
            for ( int j = 0; j < n - 1 - i; j++ ) {
                if ( b[j] > b[j+1] ) {
                    swap( b[j] , b[j+1] );
                    ans.push_back( {2,j+1} );
                }
            }
        }
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] > b[i] ) {
                swap( a[i] , b[i] );
                ans.push_back( {3,i+1} );
            }
        }
        cout << ans.size() << endl;
        for ( int i = 0; i < ans.size(); i++ ) {
            cout << ans[i].first << " " << ans[i].second <<endl;
        }
    }
    return 0;
}
