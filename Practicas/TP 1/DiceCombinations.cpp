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
    ll n; cin >> n;
    vector<ll> dp(n+10);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;

    forr(i, 7, n+1){
        dp[i] = (((dp[i-1] + dp[i-2]) % MOD) + ((dp[i-3] + dp[i-4]) % MOD) + ((dp[i-5] + dp[i-6]) % MOD)) % MOD; 
    }

    cout << dp[n] << "\n";
}