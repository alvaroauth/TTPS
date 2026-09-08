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
const ll MOD = 1e9+7;

int main(){
    ll n, x; cin >> n >> x;
    multiset<ll> monedas;
    vector<ll> dp(x+1, 0);

    ll aux;
    forn(i, n){
        cin >> aux;
        monedas.insert(aux);
        if (aux <= x) dp[aux] = 1;
    }

    forr(i, 1, x+1){
        for(auto m: monedas){
            ll falta = i - m;
            if (falta < 0) break;
            dp[i] = (dp[i] + dp[falta]) % MOD;
        }
    }

    cout << dp[x] << "\n";
}