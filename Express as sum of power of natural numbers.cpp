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

ll res;

ll power(ll x,ll num,ll k,ll n)
{
 if(num==0)
   res++;
 ll r=pow(x,(1.0/n));
 for(ll i=k+1;i<=r;i++)
 {
  ll a=num-pow(i,n);
  if(a>=0)
    power(x,a,i,n);
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
  ll x,n;
  cin>>x>>n;
  res=0;
  cout<<power(x,x,0,n)<<endl;
 }
 return 0;
}
