#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0);cin.tie(0)
#define scn(n) scanf("%d",&n)
#define lscn(n) scanf("%lld",&n)
typedef long long ll;
#define pri(n) printf("%d\n",n)
#define lpri(n) printf("%lld\n",n);
#define rep(i,st,ed) for(int i=st;i<ed;i++)
#define var(n) int n; scn(n)
#define F first
#define S second 
#define pb(n) push_back(n)
#define all(x) (x).begin(),(x).end()
const int N=1e6+6;
const ll M=1e9+7;
const ll inf=1e18+5;

vector<int> End[N];

int xoroperator2()
{
	ios;
	int T;
	cin>>T;
	while(T--)
	{
		vector<int> v;
		v.push_back(0);
		int q;
		cin>>q;
		int Xor = 0;
		while(q--)
		{
			int type,x;
			cin>>type>>x;
			if(type==0)
			{
				v.push_back(x);
			}
			else
			{
				int sz = v.size();
				End[sz].push_back(x);
				Xor ^= x;
			}
		}
		int sz = v.size();
		for(int i = 0;i<sz;i++)
		{
			v[i] ^= Xor;
			for(auto it : End[i+1])
			{
				Xor ^= it;
			}
		}
		sort(all(v));
		for(auto it : v)
			cout<<it<<' ';
		cout<<"\n";
	}		
}