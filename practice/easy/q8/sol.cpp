#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair
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
void setupConfig();

void solve() {
    int k, l, m, n;
    cin >> n >> m;
    int a[n];
    bool s[n+1][m+1];
    fo(i, n)
        cin >> a[i];

    for(int i=0; i <= n; i++)
        s[i][0] = true;
    
    for(int j=1; j <= m; j++)
        s[0][j] = false;

    for(int i=1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            k = a[i - 1];
            if(j < k) {
                s[i][j] = s[i - 1][j];
            } else {
                s[i][j] = s[i - 1][j] || s[i - 1][j - k];
            }
        }
    }
    s[n][m] ? fa("Yes") : fa("No");
}

int main() {
    setupConfig();

    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
    return 0 ;
}

// ---- basic setup ---
void setupConfig() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
}