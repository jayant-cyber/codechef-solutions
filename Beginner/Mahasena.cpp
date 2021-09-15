#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

using namespace std;

void solve();

int main() 
{
        solve();
	return 0;
}

void solve(){
   int n;
   cin>>n;
   int a,ev=0,od=0;
   loop(n){ 
        cin>>a;
        if(a%2==0) ev++;
        else od++;
    }
    ev>od ? cout<<"READY FOR BATTLE" : cout<<"NOT READY" ;
    cout<<endl;
}