#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair
#define fo(i, n) for(int i=0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

// ------------- for debugging
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

// ------------- function definations
void setupConfig();
int mpow(int base, int exp);
const int mod = 1000000007;

// ------------- solution by me
void solve() {
    int a, k, n, p, q, r, x, y, z;
    cin >> a >> n >> k;
    vi v(k, 0);
    a = a % mpow(n+1, k);
    fo(i, a) {
        v[0]++;
        if (v[0] > n) {
            v[0] = 0;
            for (int j = 1; j < k; j++) {
                if(v[j] + 1 <= n) {
                    v[j]++;
                    break;
                }
                v[j] = 0;
            }
        }
    }
    debV(v);
}

// ------------- smart solution found in submissions 
void solve2() {
    int a,n,k;
    cin>>a>>n>>k;
    for(int i=0;i<k;i++){
        cout<<(a%(n+1))<<" ";
        a/=n+1;
    }
}

int main() {
    setupConfig();
    // solve();
    solve2();
    return 0 ;
}

// ------------- for faster io and writing to files
void setupConfig() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
}

// ------------- author rachit jain
int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}