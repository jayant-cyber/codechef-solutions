#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

using namespace std;

void solve();

int main() 
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}

void solve(){
   string s;
   cin>>s;
   int count=0;
   loop(s.length())  if(s[ii]=='1'&&s[ii+1]=='0')   count++;
   if(s[s.length()-1]=='1') count++;
   cout<<count<<endl;
}