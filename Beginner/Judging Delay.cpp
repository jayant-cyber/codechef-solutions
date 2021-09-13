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
   int N;
   cin>>N;
   int count=0;
   loop(N){
       int A,B;
       cin>>A>>B;
       B-A>5 ? count++ : count=count ;
   }
   cout<<count<<endl;
}