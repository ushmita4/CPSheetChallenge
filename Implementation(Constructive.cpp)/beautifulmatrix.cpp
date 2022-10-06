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
      int x[5][5];
      int r=0,c=0;
      for(int i=0;i<5;i++)
      {
          for(int j=0;j<5;j++)
          {
             cin>>x[i][j]; 
             if(x[i][j]==1)
             {
             r=i;
             c=j;
             }
          }
      }
      cout<<abs(r-2)+abs(c-2)<<"\n";
    }
    return 0;
}

