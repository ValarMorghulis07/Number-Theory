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

void sieve(ll n)
{
 bool prime[n+1];
 mem(prime,1);
 for(ll p=2;p*p<=n;p++)
 {
  if(prime[p])
  {
   for(ll i=p*p;i<=n;i+=p)
    prime[i]=0;
  }
 }
 for(ll p=2;p<=n;p++)
 {
  if(prime[p])
    cout<<p<<" ";
 }
 cout<<"\n";
}
int main()
{
 hs;
 ll n;
 cin>>n;
 sieve(n);
 return 0;
}
