#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    
    while(t--)
    {
      ll n,f=0;
      cin>>n;
      for(ll i=0;i<n;i++){
          ll x;
          cin>>x;
          if(x==1)
          {
              cout<<"HARD"<<"\n";
              f=1;
              break;
          }
      }
      if(f==0)
      cout<<"EASY"<<"\n";
    }
    return 0;
}
