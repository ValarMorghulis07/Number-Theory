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

void heapify(ll a[],ll n,ll p)
{
 ll largest=p;
 ll left=2*p+1;
 ll right=2*p+2;
 if(left<n && a[left]>a[largest])
    largest=left;
 if(right<n && a[right]>a[largest])
    largest=right;
 if(largest!=p)
 {
  swap(a[p],a[largest]);
  heapify(a,n,largest);
 }
}
void heapsort(ll a[],ll n)
{
 for(ll i=n/2-1;i>=0;i--)
    heapify(a,n,i);
 for(ll i=n-1;i>=0;i--)
 {
  swap(a[0],a[i]);
  heapify(a,i,0);
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
  heapsort(a,n);
  f(n)
   cout<<a[i]<<" ";

 }
 return 0;
}
