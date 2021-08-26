#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
	int T ;
	cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}

void solve(){
    int N,K,D;
    cin>>N>>K>>D;
    int sum=0;
    while(N--){
        int a;
        cin>>a;
        sum+=a;
    }
    (sum/K) > D ? cout<<D : cout<<sum/K ;
    cout<<endl;
}