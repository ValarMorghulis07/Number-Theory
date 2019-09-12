#include <bits/stdc++.h>
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
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;

ll euler(ll x,ll y,ll p)
{
 ll res=1;
 x=x%p;
 while(y>0)
 {
  if(y & 1)
    res=(res*x)%p;
  y=y>>1;
  x=(x*x)%p;
 }
 return res;
}

int main()
{
 hs;
 ll t;
 cin>>t;
 f(t)
 {
  ll a,m;
  cin>>a>>m;
  ll ff=0;
  if(a==0 || m==2)
  {
    cout<<"YES"<<endl;
    ff=1;
  }
  else
  {
  if(euler(a,(m-1)/2,m)==1)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  }

 }
 return 0;
 }
