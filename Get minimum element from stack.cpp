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

int _stack :: getMin()
{
  if(s.empty())
   return -1;
  else
   return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
 if(s.empty())
  return -1;
 int x=s.top();
 s.pop();
 if(x<minEle)
 {
  int zz=minEle;
  minEle=2*minEle-x;
  return zz;
 }
 else
  return x;
}
/*push element x into the stack*/
void _stack::push(int x)
{
  if(s.empty())
  {
   s.push(x);
   minEle=x;
   return;
  }
  if(x<minEle)
  {
    s.push(2*x-minEle);
    minEle=x;
  }
  else
    s.push(x);
}
