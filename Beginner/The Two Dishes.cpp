#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; ++ i)
#define loop1(n) for(int ii = 0; ii < n; ++ ii)

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
   int n,s,count=0;
   cin>>n>>s;
   if(n>=s) cout<<s;
   else cout<<(n-(s-n));
   cout<<endl;
}