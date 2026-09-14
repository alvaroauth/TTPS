#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())


int main(){
    ll n, x; cin >> n >> x;
    vector<ll> valores(n), pesos(n);
    vector<ll> dp(x+1, 0), nuevo(x+1, 0);
    forn(i, n) cin >> pesos[i];
    forn(i, n) cin >> valores[i];

    forn(i, n){
        forn(p, x+1){
            nuevo[p] = dp[p];
            if (p - pesos[i] < 0) continue;
            nuevo[p] = max(nuevo[p], dp[p-pesos[i]]+valores[i]);
        }
        swap(dp, nuevo);
    }



    ll res = 0;
    forn(i, x+1) res = max(res, dp[i]);
    cout << res << "\n";
}