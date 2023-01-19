#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> prime;
bool mark[100000000];

void sieve(ll n){ 
    for (ll p = 2; p * p <= n; p++){ 
        if (mark[p] == true){  
            for (int i = p * p; i <= n; i += p){ 
                mark[i] = false;
        }
        } 
    } 
    for (ll p = 2; p <= n; p++) 
       if (mark[p]) 
          prime.push_back(p); 
}

int main(){
    memset(mark, 1, sizeof(mark));
    sieve(10000000);
    int n; cin>>n;
    cout << prime[n - 1] << endl;

    return 0;
}