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
   int a,b,c,d,e;
   cin>>a>>b>>c>>d>>e;
   bool allowed = false;
   if(a+b<=d && c<=e) allowed = true;
   else if(c+b<=d && a<=e) allowed = true;
   else if(a+c<=d && b<=e) allowed = true;
   else allowed = false;
   allowed ? cout<<"YES" : cout<<"NO" ;
   cout<<endl;
}