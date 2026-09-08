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
const ll INF = 1e9+7;

int main(){
    ll n, x; cin >> n >> x;
    set<ll> monedas;
    vector<ll> dp(x+1, INF);
    
    ll aux;
    forn(i, n){
        cin >> aux;
        monedas.insert(aux);
        if (aux <= x) dp[aux] = 1;
    }

    forr(i, 1, x+1){
        for(auto mon: monedas){
            ll falta = i - mon;
            if (falta < 0) break;
            dp[i] = min(dp[i], 1+dp[falta]);
        }
    }
    if (dp[x] == INF) dp[x] = -1;
    cout << dp[x] << "\n";
}