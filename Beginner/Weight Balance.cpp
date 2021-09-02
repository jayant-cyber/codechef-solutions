#include <bits/stdc++.h>
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
    int w1,w2,x1,x2,M;
    cin>>w1>>w2>>x1>>x2>>M;
    int w = w2-w1;
    if((w==x1*M||w==x2*M)||(w>=x1*M&&w<=x2*M)) cout<<1;
    else cout<<0;
    cout<<endl;
}