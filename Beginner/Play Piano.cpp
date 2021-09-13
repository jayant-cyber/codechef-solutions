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
   bool flag = false ;
   for(int i =0;i<s.length();i+=2){
       if(s[i]=='A'&&s[i+1]=='B') flag = false ;
       else if(s[i]=='B'&&s[i+1]=='A') flag = false ;
       else { 
           flag = true ;
           break;
       }
   }
   flag ? cout<<"no" : cout<<"yes";
   cout<<endl;
}