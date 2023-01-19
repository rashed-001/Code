// Author : Epsilon573
// If it works, don't touch it.

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define mp make_pair
#define pb push_back
#define endl "\n"

bool solve()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;

    string ans(n,'?');

    ll boxes = (n+2)/3;
    ll full = 0;

    map<char,ll> freq;

    for(auto x : s){
        freq[x]++;
        if(freq[x]>boxes)
            return false;
        if(freq[x]==boxes)
            full++;
    }

    ll rem = n%3;
    if(!rem) rem = 3;

    if(full>rem)
        return false;

    ll curr_box = 0, box_slot = 0;

    vector<pair<ll, char>> v;
    for(auto x : freq)
        v.emplace_back(x.second,x.first);
    sort(v.rbegin(),v.rend());

    for(auto pr : v){
        char x = pr.second;
        while(freq[x]--){
            ans[curr_box*3+box_slot] = x;
            curr_box++;

            if( curr_box*3+box_slot >= n){
                box_slot++;
                curr_box = 0;
            }
        }
    }
    
    for(ll i=2 ; i<n ; ++i){
        if(ans[i-2] == ans[i]){
            swap(ans[i],ans[i+1]);
        }
    }

    cout << "YES" << endl;
    cout << ans << endl;
    return true;    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    ll t=1;
    cin >> t;

    while(t--)
    {
        if(solve())
        {
            // cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
} 
