#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll> res;
      ll p=1;
      while(n>0){
          if(n%10>0){
              res.push_back((n%10)*p);
          }
          n/=10;
          p*=10;
      }
      cout<<res.size()<<"\n";
      for(auto it : res)
      cout<<it<<" ";
      
      cout<<"\n";
    }
    return 0;
}



