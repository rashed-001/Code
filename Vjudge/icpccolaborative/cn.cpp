#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char t[50010];
bool a[200];
bool s[200][200];
bool ok[50010];
void solve()
{
    a['h']=a['b']=a['c']=a['n']=a['o']=a['f']=a['p']=a['s']=a['k']=a['v']=a['y']=a['i']=a['w']=a['u']=true;
	s['h']['e']=s['l']['i']=s['b']['e']=s['n']['e']=s['n']['a']=s['m']['g']=s['a']['l']=s['s']['i']=s['c']['l']=s['a']['r']=true;
	s['c']['a']=s['s']['c']=s['t']['i']=s['c']['r']=s['m']['n']=s['f']['e']=s['c']['o']=s['n']['i']=s['c']['u']=s['z']['n']=s['g']['a']=s['g']['e']=s['a']['s']=s['s']['e']=s['b']['r']=s['k']['r']=true;
	s['r']['b']=s['s']['r']=s['z']['r']=s['n']['b']=s['m']['o']=s['t']['c']=s['r']['u']=s['r']['h']=s['p']['d']=s['a']['g']=s['c']['d']=s['i']['n']=s['s']['n']=s['s']['b']=s['t']['e']=s['x']['e']=true;
	s['c']['s']=s['b']['a']=s['h']['f']=s['t']['a']=s['r']['e']=s['o']['s']=s['i']['r']=s['p']['t']=s['a']['u']=s['h']['g']=s['t']['l']=s['p']['b']=s['b']['i']=s['p']['o']=s['a']['t']=s['r']['n']=true;
	s['f']['r']=s['r']['a']=s['r']['f']=s['d']['b']=s['s']['g']=s['b']['h']=s['h']['s']=s['m']['t']=s['d']['s']=s['r']['g']=s['c']['n']=s['f']['l']=s['l']['v']=true;
	s['l']['a']=s['c']['e']=s['p']['r']=s['n']['d']=s['p']['m']=s['s']['m']=s['e']['u']=s['g']['d']=s['t']['b']=s['d']['y']=s['h']['o']=s['e']['r']=s['t']['m']=s['y']['b']=s['l']['u']=true;
	s['a']['c']=s['t']['h']=s['p']['a']=s['n']['p']=s['p']['u']=s['a']['m']=s['c']['m']=s['b']['k']=s['c']['f']=s['e']['s']=s['f']['m']=s['m']['d']=s['n']['o']=s['l']['r']=true;
}
int main()
{
    solve();
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",t);
        memset(ok,0,sizeof(ok));
        ok[0]=true;
        int i;
        for(i=0;t[i];++i){
            if(!ok[i])continue;
            if(a[t[i]])ok[i+1]=true;
            if(s[t[i]][t[i+1]])ok[i+2]=true;
        }
        if(ok[i])puts("YES");
        else puts("NO");
    }
    return 0;
}