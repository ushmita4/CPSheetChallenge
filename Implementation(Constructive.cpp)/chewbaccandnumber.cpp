#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    
    while(t--)
    {
      string s;
      cin>>s;
      
      for(int i=0;i<s.size();i++){
          if(s[i]>='5')
          s[i]='9'-s[i]+'0';
      }
      if(s[0]=='0')
      s[0]='9';
      cout<<s<<"\n";
    }
    
    return 0;
}

