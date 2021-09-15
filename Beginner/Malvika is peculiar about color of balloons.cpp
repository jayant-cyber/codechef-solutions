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
   string s;
   cin>>s;
   int a=0,b=0;
   for(int i=0,y=s.size();i<y;i++){
       if(s[i]=='a') a++;
       else b++;
   }
   a==b ? cout<<a : a<b ? cout<<a : cout<<b;
   cout<<endl;
}