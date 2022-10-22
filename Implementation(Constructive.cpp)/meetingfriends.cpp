#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t=1;
    while(t--)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      ll ans;
      ans=max(max(a,b),c)-min(min(a,b),c);
      cout<<ans<<"\n";
    }
    return 0;
}



