#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };


/*
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
*/

const int sz = 1e3+7;
const int mod=1e9+7;

void solve()
{
   int n,i,j,cntp=0,cnts=0;
   cin>>n;

   string s;
   vector<string>vec,take;

   for(i=0;i<2*n-2;i++)
   {
       cin>>s;
       vec.pb(s);

       if(s.size()==n-1)
       {
           take.pb(s);
       }
   }
   string x = take[0];
   string y = take[1];

   s = x+y[n-2];

   string ans;

   for(auto it: vec)
   {
       bool f=true;
       for(i=0;i<it.size() && i<s.size();i++)
       {
           if(s[i]!=it[i])
           {
               f=false;
               break;
           }
       }
       if(f)
       {
           ans+='P';
           continue;
       }
       f=true;
       j=n-1;
       for(i=it.size()-1;i>=0;i--)
       {
           if(s[j]!=it[i])
           {
               f=false;
               break;
           }
           j--;
       }
       if(f)
       {
           ans+='S';
       }
       else
       {
           ans.clear();
           break;
       }
   }
   if(ans.size()) 
   {
       bool f=true;
       for(i=0;i<ans.size();i++)
       {
           if(ans[i]=='S') cnts++;
           else cntp++;
       }
       cout<<cnts<<' '<<cntp<<endl;
       for(i=0;i<ans.size();i++)
       {
           if(cnts==cntp) break;

           if(cnts>cntp)
           {
               if(ans[i]=='S')
               {
                   x = vec[i];
               }
               f=true;
               for(j=0;j<x.size();j++)
               {
                   if(s[j]!=x[j])
                   {
                       f=false;
                   }
               }
               if(f)
               {
                   ans[i]='P';
                   cntp++;
                   cnts--;
               }
           }
           if(cnts<cntp)
           {
               if(ans[i]=='P')
               {
                   x = vec[i];
               }
               f=true;
               int l = n-1;
               for(j=x.size()-1;j>=0;j--)
               {
                   if(s[l]!=x[j])
                   {
                       f=false;
                   }
                   l--;
               }
               if(f)
               {
                   ans[i]='P';
                   cntp--;
                   cnts++;
               }
           }
       }
       if(cntp==cnts) 
       {
           cout<<ans<<endl;
          //cout<<"FIRST"<<endl;
           return;
       }
   }

   s.clear();
   s = y+x[n-2];

   //strinans;

   for(auto it: vec)
   {
       bool f=true;
       for(i=0;i<it.size() && i<s.size();i++)
       {
           if(s[i]!=it[i])
           {
               f=false;
               break;
           }
       }
       if(f)
       {
           ans+='P';
           continue;
       }
       f=true;
       j=n-1;
       for(i=it.size()-1;i>=0;i--)
       {
           if(s[j]!=it[i])
           {
               f=false;
               break;
           }
           j--;
       }
       if(f)
       {
           ans+='S';
       }
       else
       {
           ans.clear();
           break;
       }
   }
   if(ans.size()) 
   {
       bool f=true;
       cnts=cntp=0;
       for(i=0;i<ans.size();i++)
       {
           if(ans[i]=='S') cnts++;
           else cntp++;
       }
       for(i=0;i<ans.size();i++)
       {
           if(cnts==cntp) break;

           if(cnts>cntp)
           {
               if(ans[i]=='S')
               {
                   x = vec[i];
               }
               f=true;
               for(j=0;j<x.size();j++)
               {
                   if(s[j]!=x[j])
                   {
                       f=false;
                   }
               }
               if(f)
               {
                   ans[i]='P';
                   cntp++;
                   cnts--;
               }
           }
           if(cnts<cntp)
           {
               if(ans[i]=='P')
               {
                   x = vec[i];
               }
               f=true;
               int l = n-1;
               for(j=x.size()-1;j>=0;j--)
               {
                   if(s[l]!=x[j])
                   {
                       f=false;
                   }
                   l--;
               }
               if(f)
               {
                   ans[i]='P';
                   cntp--;
                   cnts++;
               }
           }
       }
   }
   cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //pre();

    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}