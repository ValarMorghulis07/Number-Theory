#include<bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define F first
#define S second
#define pi 3.14159265359
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef  long long int ll;
ll HRX=1e18;
ll INF=1e9+7;

ll a[100][100];

void printspiral(ll m,ll n,ll a[100][100])
{
 ll k=0,l=0;
 while(k<m && l<n)
 {
   for(ll i=l;i<n;i++)
    cout<<a[k][i]<<" ";
   k++;

   for(ll i=k;i<m;i++)
     cout<<a[i][n-1]<<" ";
   n--;

   if(k<m)
   {
    for(ll i=n-1;i>=l;i--)
      cout<<a[m-1][i]<<" ";
    m--;
   }

   if(l<n)
   {
    for(ll i=m-1;i>=k;i--)
      cout<<a[i][l]<<" ";
    l++;
   }
 }
}

int main()
{
 hs;
 ll t;
 cin>>t;
 f(t)
 {
  ll m,n;
  cin>>m>>n;
  f(m)
  {
   r(n)
   {
    cin>>a[i][j];
   }
  }
  printspiral(m,n,a);
 }
 return 0;
}
