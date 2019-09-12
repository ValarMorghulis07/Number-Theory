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

void answer(ll a[],ll n)
{
 ll maxx=0,minn=0;
 f(n)
 {
  maxx=maxx+a[i];
  if(maxx<0)
    maxx=0;
  if(minn<maxx)
    minn=maxx;
 }
 sort(a,a+n);
 if(a[n-1]<0)
    cout<<a[n-1]<<endl;
 else
   cout<<minn<<endl;
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
  ll a[n];
  f(n)
  {
   cin>>a[i];
  }
  answer(a,n);
 }
 return 0;
}
