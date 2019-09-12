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

ll BS(ll a[],ll L,ll R,ll x)
{
 ll mid;
 while(L<=R)
 {
  mid=(L+R)/2;
  if(a[mid]==x)
    return mid;
  else if(a[mid]>x)
    R=mid-1;
  else
    L=mid+1;
 }
 return -1;
}
ll findpivot(ll a[],ll low,ll high)
{
 if(low>high)
  return -1;
 if(low==high)
  return low;
 ll mid=(high+low)/2;
 if(mid<high && a[mid]>a[mid+1])
   return mid;
 if(low<mid && a[mid]<a[mid-1])
   return (mid-1);
 if(a[low]>=a[mid])
   return findpivot(a,low,mid-1);
 return findpivot(a,mid+1,high);
}

ll pivotedBs(ll a[],ll n,ll x)
{
 ll pivot=findpivot(a,0,n-1);

 if(pivot==-1)
   return BS(a,0,n-1,x);
 if(x>=a[0])
    return BS(a,0,pivot,x);
 return BS(a,pivot+1,n-1,x);
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
  ll x;
  cin>>x;
  ll zz=pivotedBs(a,n,x);
  cout<<zz<<endl;


 }
 return 0;
}
