#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_map<int,int> mp;
        for ( int i = 0; i < n; i++ ) {
            mp[s[i]-'a']++;
        }
        bool ans = false;
        for ( int i = 1; i < n-1; i++ ) {
            if ( mp[s[i]-'a'] >= 2 ) {
                ans = true;
                break;
            }
        }
        cout << ( ans ? "YES" : "NO" ) << endl;
    }
    return 0;
}
