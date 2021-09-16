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
   int n;
   cin>>n;
   string s[4]={"North", "East", "South", "West"};
   cout<<s[n%4]<<endl;
}