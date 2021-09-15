#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

using namespace std;

void solve();
long int fact(int n){
    if(n<2) return 1;
    else return n * fact(n-1);
}

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
   cout<<fact(n)<<endl;
}