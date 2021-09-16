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
   int D,d,a,b,c;
   cin>>D>>d>>a>>b>>c;
   int k =D*d;
   k>=42 ? cout<<c : k>=21 ? cout<<b : k>=10 ? cout<<a : cout<<0;
   cout<<endl;
}