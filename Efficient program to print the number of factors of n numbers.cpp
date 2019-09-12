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

const ll N=101;
ll cnt[N]={0};
ll factor[N]={0};

void primefactors()
{
 factor[1]=1;
 for(ll i=2;i<N;i++)
     factor[i]=i;
 for(ll i=4;i<N;i+=2)
     factor[i]=2;
 for(ll i=3;i*i<N;i++)
 {
  if(factor[i]==i)
  {
   for(ll j=i*i;j<N;j+=i)
   {
    if(factor[j]==j)
      factor[j]=i;
   }

  }
 }
}

ll countfactors(ll n)
{
 if(n==1)
   return 1;
 ll ans=1,c=1;
 ll dup=factor[n];
 ll zz=n/factor[n];
 while(zz!=1)
 {
  if(factor[zz]==dup)
    c+=1;
  else
  {
   dup=factor[zz];
   ans=ans*(c+1);
   c=1;
  }
  zz=zz/factor[zz];
 }
 ans=ans*(c+1);
 return ans;
}

int main()
{
 hs;
 primefactors();
 for(ll i=1;i<N;i++)
 {
  cnt[i]=countfactors(i);
 }
 for(ll i=1;i<N;i++)
  cout<<i<<"="<<cnt[i]<<endl;
 return 0;

}
