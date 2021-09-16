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
    int r1,w1,c1,r2,w2,c2,A=0,B=0;
    cin>>r1>>w1>>c1>>r2>>w2>>c2;
    r1>r2 ? A++ : B++;
    w1>w2 ? A++ : B++;
    c1>c2 ? A++ : B++;
    A>B? cout<<"A" : cout<<"B";
   cout<<endl;
}