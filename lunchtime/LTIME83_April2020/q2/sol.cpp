#include <bits/stdc++.h> 
#define pb push_back
#define fo(i, n) for(int i=0; i < n; i++)
#define all(x) x.begin(), x.end()

// ------ For debugging
#define PL(x) cout << x << "\n"
#define pline cout << "\n"
#define deb(x) cout << x << " "
#define debV(v) for(auto e: v) {deb(e);}; pline
#define debKV(x) cout << #x << x << "\n"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<int> vi;


void solve() {
    int n, s;
    cin >> n >> s;
    int pv[n], pt[n];
    string sd = "yes";
    fo(i, n){
        cin >> pv[i];
        pt[i] = pv[i];
    }
    sort(pt, pt+n);
    bool flag = true;
    for(int i = 0 ; i < s; i++) {
        vi p, q;
        for(int j = i; j < n; j += s) {
            p.pb(pv[j]);
            q.pb(pt[j]);
        }
        sort(all(p));
        if (p != q) {
            flag = false;
            break;
        }
    }
    flag ? PL("yes") : PL("no");
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        solve();
    }
    return 0 ;
}