#include<bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;

int main(){
    ll n, a, b; cin >> n;
    ll maxA = -1, minA = 1e9, maxB = -1, minB = 1e9;
    
    forn(i, n){
        cin >> a >> b;
        maxA = max(maxA, a);
        maxB = max(maxB, b);
        minA = min(minA, a);
        minB = min(minB, b);
    }

    ll base = maxB - minB + 2, altura = maxA - minA + 2;

    ll perimetro = 2*(base + altura);

    cout << perimetro << "\n";
}