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
    int N,K;
    cin>>N>>K;
    if(N%K==0) cout<<(int)(N/K)<<" "<<K;
    else cout<<(int)(N/K)+1<<" "<<N-(K*(N/K));
    cout<<endl;
}