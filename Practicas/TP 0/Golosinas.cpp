#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a, b, c; cin >> a >> b >> c;

    if (((b-a)%c) == 0) cout << "S\n";
    else cout << "N\n";
}