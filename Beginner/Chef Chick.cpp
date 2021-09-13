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
   int a[n];
   loop(n){
       cin>>a[ii];
   }
   sort(a,a+n);
   cout<<a[0]<<endl;
}