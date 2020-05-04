#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair
#define fo(i, n) for(int i=0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define scanArr(a, n) fo(i, n) { cin >> a[i]; }

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
    int n, n1, n2, n3, v1, v2, v3;
    cin >> n1 >> n2 >> n3;
    n = n1 + n2 + n3;
    int a[n];
    scanArr(a, n);
    sort(a, a+n);
    vector<int> s;
    
    for(int i =0; i < n -1; i++) {
        if(a[i] == a[i - 1]) {
            s.pb(a[i]);
        }
    }
    s.erase(unique(s.begin(), s.end()), s.end());
    fa(s.size());
    for(auto const e: s) {
        fa(e);
    }
}

int main() {
    setupConfig();

    solve();
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