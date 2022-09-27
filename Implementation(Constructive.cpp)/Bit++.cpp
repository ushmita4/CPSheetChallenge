

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int c=0;
    while(t--)
    {
      string x;
      cin>>x;
      
      if(x=="X++")
      c++;
      if(x=="++X")
      ++c;
      if(x=="X--")
      c--;
      if(x=="--X")
      --c;
    }
    cout<<c<<"\n";
    return 0;
}

