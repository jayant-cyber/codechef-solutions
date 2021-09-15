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
   string s; cin>>s;
   string subs[6] = {"PCM","PMC","CPM","CMP","MPC","MCP"};
   bool flag = false;
   for(int i=0;i<6;i++){
       if(s.compare(subs[i])==0){
           flag = true;
       }
   }
   flag ? cout<<"YES" : cout<<"NO";
   cout<<endl;
}