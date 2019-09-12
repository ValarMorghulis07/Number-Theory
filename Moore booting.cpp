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
  ll index=0,cnt=1;
  for(ll i=1;i<n;i++)
  {
   if(a[i]==a[index])
     cnt++;
   else
     cnt--;
   if(cnt==0)
   {
    index=i;
    cnt=1;
   }
  }
  ll zz=(n/2)+1;
   cnt=0;
  ll ans=a[index];
  f(n)
  {
   if(a[i]==ans)
     cnt++;

  }
  if(cnt>=zz)
    cout<<"YES"<<" "<<ans<<endl;
  else
    cout<<"NO"<<endl;
 }
 return 0;
}
