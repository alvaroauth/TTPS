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
    set<ll> monedas;
    vector<ll> dp(x+1, 0);
    dp[0] = 1;
    ll aux;
    forn(i, n){
        cin >> aux;
        if (aux <= x) monedas.insert(aux);
    }

    
    for(auto m: monedas){
        
        forr(i, m, x+1){
            ll falta = i - m;
            if (falta < 0) continue;
            dp[i] = (dp[i] + dp[falta]) % MOD;
        }
    }

    cout << dp[x] << "\n";  
}