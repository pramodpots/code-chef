#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair
#define fo(i, n) for(int i=0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

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

//---- function definations
void setupConfig();

void solve() {
    int n, k, s = 0, t = 0;
    cin >> n >> k;
    int a[n];
    fo(i, n) {
        cin >> a[i];
        t += a[i];
    }
    sort(a, a+n);
    k = k > n - k ? n - k : k;
    fo(i, k) {
        s += a[i];
    }
    fa(abs((t-s) - s));
}

int main() {
    setupConfig();

    int T;
    cin >> T;
    while( T-- ) {
        solve();
    }
    return 0 ;
}

// ---- for faster io and writing to files ---
void setupConfig() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
}