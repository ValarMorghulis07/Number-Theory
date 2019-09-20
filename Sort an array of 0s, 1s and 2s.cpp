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

void sortit(ll a[],ll n)
{
 ll mid=0,low=0,high=n-1;
 while(mid<=high)
 {
  if(a[mid]==0)
    swap(a[low++],a[mid++]);
  else if(a[mid]==1)
    mid++;
  else
    swap(a[mid],a[high--]);
 }
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
  sortit(a,n);
  f(n)
   cout<<a[i]<<" ";
  cout<<"\n";
 }
 return 0;
}
