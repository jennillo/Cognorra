#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define nwl "\n"
#define FO(x) freopen(x".out", "w", stdout)
#define FI(x) freopen(x".in", "r", stdin)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MN = 0;
const int MX = 1e6;

void solve(int tc) {
    int N; cin >> N;
    vector<ll> a(N + 1);
    unordered_map<ll, ll> last;
    ll ans = 0, l = 0, len;
    for(int i = 1; i <= N; i++) cin >> a[i];
    for(int r = 1; r <= N; r++) {
        if(last[a[r]]) {
            l = max(l, last[a[r]]);
        }
        last[a[r]] = r;
        len = r - l;
        ans += len;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
