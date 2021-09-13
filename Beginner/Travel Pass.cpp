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
   int N,A,B;
   cin>>N>>A>>B;
   string s;
   cin>>s;
   int zero=0,one=0;
   loop(N){
       if(s[ii]=='0') zero++;
       else one++;
   }
   cout<<(zero*A+one*B)<<endl;
}