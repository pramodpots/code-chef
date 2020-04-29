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
    int G, I, N, Q;
    cin >> G;
    while(G--) {
        cin >> I >> N >> Q;
        if (N % 2 == 0) {
            fa(N/2);
        } else {
            N = (N + 1) / 2;
            I == Q ? fa(N - 1) : fa(N);
        }
    }
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