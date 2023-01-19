#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1001000
int main()
{
    vector<ll>v;
    ll n,m,t=0,i,j,ck=0,dk,a=mx,b=mx,c=mx,ab=mx,ac=mx,bc=mx,abc=mx;
    cin>>m;
    while(m--){
        string arr;
        ll first=0,sec=0,trd=0;
        cin>>n>>arr;
        for(i=0; i<arr.size(); i++){
            if(arr[i]=='A') first++;
            else if(arr[i]=='B') sec++;
            else trd++;
        }
        if(first && sec && trd) abc = min(abc, n);
        else if(first && sec) ab = min(ab, n);
        else if(first && trd) ac = min(ac, n);
        else if(sec && trd) bc = min(bc, n);
        else if(first) a = min(a, n);
        else if(sec) b = min(b, n);
        else c = min(c, n);
    }

      v.push_back(abc);
      v.push_back(a+bc);
      v.push_back(b+ac);
      v.push_back(c+ab);
      v.push_back(ab+bc);
      v.push_back(ab+ac);
      v.push_back(bc+ac);
      v.push_back(a+b+c);

      sort(v.begin(), v.end());

      if(v[0]<mx) cout<<v[0]<<endl;
      else cout<<"-1"<<endl;
  return 0; 
}