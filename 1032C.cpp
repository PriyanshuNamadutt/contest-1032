#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a( n , vector<int>(m) );
        int mx = 0;
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                cin >> a[i][j];
                mx = max( mx , a[i][j] );
            }
        }
        int cnt = 0;
        vector<int> row(n) , col(m);
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                if ( a[i][j] == mx ) {
                    cnt++;
                    row[i]++;
                    col[j]++;
                }
            }
        }
        bool check = false;
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                int c = row[i] + col[j];
                if ( a[i][j] == mx ) c--;
                if ( cnt == c ) {
                    check = true;
                    break;
                }
            }
            if ( check ) break; 
        }
        cout << ( check ? mx -1 : mx ) << endl;
    }
    return 0;
}
