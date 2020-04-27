#include <bits/stdc++.h> 
#define pb push_back
#define fo(i, n) for(int i=0; i < n; i++)
#define all(x) x.begin(), x.end()

// ------ For debugging
#define pline cout << "\n"
#define deb(x) cout << x << " "
#define debX(x) cout << #x << " " << x << "\n"
#define debV(v) for(auto e: v) {deb(e);}; pline
#define fa(x) cout << x << "\n" // final Ans 

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<int> vi;

void solve() {
    int n, k;
    cin >> n;
    int b[n];
    fo(i, n) {
        cin >> b[i];
    }
    cin >> k;
    int l = b[k - 1];
    sort(b, b+n);
    k = lower_bound(b, b+n, l) - b;
    fa(k + 1);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
    return 0 ;
}