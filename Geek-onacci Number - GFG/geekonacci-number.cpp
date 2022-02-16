#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
	ll a,b,c,n;
	cin>>a>>b>>c>>n;
	ll ans;
	n-=3;
	while(n--)
	{
	    ans=a+b+c;
	    a=b;
	    b=c;
	    c=ans;
	}
	cout<<ans<<"\n";
    }
}