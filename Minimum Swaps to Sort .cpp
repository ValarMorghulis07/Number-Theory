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
typedef long long int ll;
ll ESP=1e18;
ll INF=1e9+7;

const int N=2*1001;
bool vis[N];
vector<pair<int,int>>vec;

int minSwaps(int A[], int N)
{
  for(int i=0;i<N;i++)
  {
     vec.push_back(make_pair(A[i],i));

  }
  sort(vec.begin(),vec.end());
  memset(vis,0,sizeof(vis));
  int ans=0;
  for(int i=0;i<N;i++)
  {
    if(vis[i] || vec[i].second==i)
       continue;
    int j=i;
    int cycle_size=0;
    while(!vis[j])
    {
     vis[j]=1;
     j=vec[j].second;
     cycle_size++;
    }
    if(cycle_size>1)
      ans+=cycle_size-1;
  }
  vec.clear();
  return ans;


}
