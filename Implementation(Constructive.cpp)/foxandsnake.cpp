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
      ll n,m;
      cin>>n>>m;
      for(ll i=0;i<n;i++){
          for(ll j=0;j<m;j++){
              if(i%2==0 || (i%4==1&&j==m-1)||(j==0&&i%4==3))
              cout<<'#'<<"";
              else
              cout<<'.'<<"";
          }
          cout<<"\n";
      }
    }
    return 0;
}


 
