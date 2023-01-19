#include <bits/stdc++.h>
using namespace std;
int tree[100005]; 
int arr[100005];  
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx=idx - (idx& -idx);
    }
    return sum;
}
void update(int n, int idx, int val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx& (-idx));
    }
}
void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        update(n, i, arr[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tt=0;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        tree[0]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            tree[i]=0;
        }
        init(n);
        cout<<"Case "<<++tt<<":\n";
        while(q--)
        {
            int type;
            cin>>type;
            if(type==1)
            {
                int i;
                cin>>i;
                int val=arr[i+1];
                arr[i+1]=0;
                cout<<val<<'\n';
                update(n, i+1, -val);
            }
            else if(type==3)
            {
                int i,j;
                cin>>i>>j;
                int val = query(j+1)-query(i);
                cout<<val<<'\n';
            }
            else
            {
                int v,i;
                cin>>i>>v;
                arr[i+1]=arr[i+1]+v;
                update(n, i+1, v);
            }
        }
    }
    return 0;
}