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
    vector<vector<ll>> dp(5, vector<ll> (n+1));

    forn(i, 5) dp[i][0] = 0;
    forn(i, 5) dp[i][1] = 1;

    forr(i, 2, n+1){
        dp[1][i] = (dp[1][i] + dp[0][i-1]) % MOD;
        forr(j, 1, 4){
            dp[j-1][i] = (dp[j-1][i] + dp[j][i-1]) % MOD;
            dp[j+1][i] = (dp[j+1][i] + dp[j][i-1]) % MOD;
        }
        dp[3][i] = (dp[3][i] + dp[4][i-1]) % MOD;
    }

    ll suma = 0;
    forn(i, 5) suma = (suma + dp[i][n]) % MOD;
    cout << suma << "\n";
}