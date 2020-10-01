																//  SMOKE SHISHA PLAY FIFA  // 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


ll modu(ll a, ll b)
{
	ll ans =1;
	while(b>0)
	{
		if(b&1)
		ans = (ans*a)%mod;
		b/=2;
		a = (a*a)%mod;
	}
	return ans;
}

int main()
{
	fastio
	ll t;
	cin >> t;
	while(t--)
	{ 
		ll a,b;
		cin>>a>>b;
		cout << min(a,b) + max(a,b) << endl;
		ll n;
		cin >> n;
		ll arr[n+1];
		for(ll i=1;i<=n;i++)
			cin >> arr[i];

		sort(arr+1 ,arr+n+1);

		for(ll i=1;i<=n;i++)
			cout <<  arr[i];

	}
	return 0;	
}
