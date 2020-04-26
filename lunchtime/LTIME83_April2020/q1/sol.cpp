#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
#define fo(i, n) for(int i=0; i < n; i++)
#define dbgg(x) cout << #x << " " << x << "\n"
  
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

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
        int n, s;
        cin >> n >> s;
        int r = 100 - s;
        int pv[n], pt[n];
        string sd = "no";
        fo(i, n) {
            cin >> pv[i];
        }
        int s0=101, s1=101;
        fo(j, n) {
            int t;
            cin >> t;
            if(t == 0 && pv[j] < s0) {
                s0 = pv[j];
            } else if (t == 1 && pv[j] < s1) {
                s1 = pv[j];
            }
        }
        // dbgg(s0);
        // dbgg(s1);
        if (s0 == 101 || s1 == 101) {
            sd = "no";
        } else if (s0 + s1 + s <= 100) {
            sd = "yes";
        }
        cout << sd << "\n";
    }

    return 0 ;

}