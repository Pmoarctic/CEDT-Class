#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;

int main()
{
    ll n;
    cin >>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll t;
        cin >>t;
        v.pb(t);
    }
    sort(all(v));

    cout << v[n-1]*v[n-2];
}
/*

*/
