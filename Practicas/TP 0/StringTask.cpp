#include<bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define esta(x,c) ((c).find(x) != (c).end())
typedef long long ll;

char minuscula(char c){
    if ((c >= 'A')and(c <= 'Z'))
        c += 32;
    return c;
}

int main(){
    string s; cin >> s;
    string res = "";

    set<char> vocales = {'A', 'E', 'Y', 'I', 'O', 'U', 'a', 'e', 'y', 'i', 'o', 'u'};

    for(auto c: s){
        if (!esta(c, vocales)){
            res += '.';
            res += minuscula(c);
        } 
    }

    cout << res << "\n";
}