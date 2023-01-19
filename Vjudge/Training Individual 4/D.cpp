#include<bits/stdc++.h>
using namespace std;
int n,k,arr[1005];
bool possible(int mid)
{
       int cnt=0,i,cur=0;
       for(i=0;i<n;i++)
       {
              cur+=arr[i];
              if(cur>mid)
              {
                     cnt++;
                     cur=arr[i];
              }
       }
       cnt++;
       return cnt<=k;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int ktest=1;ktest<=t;ktest++)
    {
           int high=0,low=-1,i;
           scanf("%d %d",&n,&k);
           n++,k++;
           for(i=0;i<n;i++)
           {
                  scanf("%d",&arr[i]);
                  high+=arr[i];
                  if(arr[i]>low) low=arr[i];
           }
           int res=low;
           while(low<high)
           {
                  int mid=(low+high)/2;
                  if(possible(mid))
                  {
                         res=mid;
                         high=mid;
                  }
                  else low=mid+1;
           }
           printf("Case %d: %d\n",ktest,res);
           int cnt=k,cur=0;

           for(i=0;i<n;i++)
           {
                   cur+=arr[i];
              if(cur>res || n-i+1==cnt)
              {
                     cnt--;
                     cur-=arr[i];
                     printf("%d\n",cur);
                     cur=arr[i];
              }
           }
           printf("%d\n",cur);
    }
}