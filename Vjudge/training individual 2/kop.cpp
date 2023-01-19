#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
typedef vector<int> vi; 
template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
void solve()
{
   string s;
   cin>>s;
  int n=s.length();int cnt=0,ct=0;
//   for(int i=0;i<n;i++){
//     if(s[i]=='S'||s[i]=='s'){cnt++;ct++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='A'||s[i]=='a'){cnt++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='M'||s[i]=='m'){cnt++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='S'||s[i]=='s'){cnt++;ct++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='U'||s[i]=='u'){cnt++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='N'||s[i]=='n'){cnt++;break;}
//   }
//   for(int i=0;i<n;i++){
//     if(s[i]=='G'||s[i]=='g'){cnt++;break;}
//   }
//   if(ct==2&&cnt==7)cout<<"SRBD"<<endl;
//   else cout<<"GHOST"<<endl;
 int k=0,l=0,m=0,o=0,p=0,q=0,r=0;
   for(int i=0;i<n;i++){
    if(s[i]=='S'||s[i]=='s'){
        if(i==0){
        k=1;}else k=i;cnt++;
        break;
    }
   }
 //  if(k=0||k>n){cout<<"Ghost"<<endl;return;}
   for(int i=k;i<n;i++){
    if(s[i]=='A'||s[i]=='a'){
        l=i;cnt++;
        break;
   }
}
 //if(l=0||l>n){cout<<"Ghost"<<endl;return;}
   for(int i=l;i<n;i++){
    if(s[i]=='M'||s[i]=='m'){
        m=i;cnt++;
        break;
   }}
   // if(m=0||m>n){cout<<"Ghost"<<endl;return;}
   for(int i=m;i<n;i++){
    if(s[i]=='S'||s[i]=='s'){
        o=i;cnt++;
        break;
   }}
   // if(o=0||o>n){cout<<"Ghost"<<endl;return;}
   for(int i=o;i<n;i++){
    if(s[i]=='U'||s[i]=='u'){
        p=i;cnt++;
        break;
   }}
   // if(p=0||p>n){cout<<"Ghost"<<endl;return;}
   for(int i=p;i<n;i++){
    if(s[i]=='N'||s[i]=='n'){
        q=i;cnt++;
        break;
   }}
    //if(q=0||q>n){cout<<"Ghost"<<endl;return;}
   for(int i=q;i<n;i++){
    if(s[i]=='G'||s[i]=='g'){
        r=i;cnt++;
        break;
   }}
   if(cnt==7)cout<<"SRBD"<<endl;
   else cout<<"GHOST"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
     cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}