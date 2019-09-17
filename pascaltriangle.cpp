#include <bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define HRX 1e18
#define INF 1000000007
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;

void  pascaltriangle(ll n)
{
 ll a[n][n];
 for(ll i=0;i<n;i++)
 {
   for(ll j=0;j<=i;j++)
   {
       if(j==0 || j==i)
          a[i][j]=1;
       else
          a[i][j]=a[i-1][j-1]+a[i-1][j];
   }
 }
 for(ll i=0;i<n;i++)
 {
     for(ll j=0;j<=i;j++)
     {
         cout<<a[i][j]<<" ";
     }
     cout<<"\n";
 }
}
int main()
{
  hs;
  ll n;
  cin>>n;
  pascaltriangle(n);
  return 0;

}
