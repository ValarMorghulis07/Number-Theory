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

void median(double a[],ll n)
{
 priority_queue<double>maxx;
 priority_queue<double,vector<double>,greater<double>>minn;
 double med=a[0];
 maxx.push(a[0]);
 cout<<med<<" ";
 for(ll i=1;i<n;i++)
 {
  double x=a[i];
  if(maxx.size()>minn.size())
  {
   if(x<med)
   {
    minn.push(maxx.top());
    maxx.pop();
    maxx.push(x);
   }
   else
   {
    minn.push(x);
   }
   med=(maxx.top()+minn.top())/2.0;
  }
  else if(maxx.size()==minn.size())
  {
    if(x<med)
    {
     maxx.push(x);
     med=double(maxx.top());
    }
    else
    {
     minn.push(x);
     med=double(minn.top());
    }
  }
  else
  {
    if(x>med)
    {
     maxx.push(minn.top());
     minn.pop();
     minn.push(x);
    }
    else
    {
     maxx.push(x);
    }
    med=(maxx.top()+minn.top())/2.0;
  }
  cout<<med<<" ";
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
  double a[n];
  f(n)
  {
   cin>>a[i];
  }
  median(a,n);
 }
 return 0;
}
