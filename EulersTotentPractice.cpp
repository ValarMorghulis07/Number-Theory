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
#define pi 3.14159265358979323846
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;

void eulerstotent(ll n)
{
 float result=n;
 for(ll p=2;p*p<=n;++p)
 {
  if(n%p==0)
  {
   while(n%p==0)
   {
    n=n/p;
   }
   result=result*(1.0-(1.0/float(p)));
  }
 }
 if(n>1)
   result=result*(1.0-(1.0/float(n)));
 cout<<ll(result)<<endl;
}

int main()
{
 hs;
 ll t;
 cin>>t;
 f(t)
 {
  ll n;
  cin>>n;
  eulerstotent(n);
 }
 return 0;
}
