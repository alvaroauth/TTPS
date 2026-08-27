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
    ll n, a, b, c; cin >> n >> a >> b >> c;

    ll maxi = -1;

    forn(i, n+1){
        forn(j, n+1){
            ll falta = (n-((i*a)+(j*b)));
            if ((falta >= 0) and ((falta % c) == 0)) maxi = max(maxi, (i+j+(falta / c)));
        }
    }

    cout << maxi << "\n";
}