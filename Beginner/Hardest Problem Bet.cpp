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
    int A,B,C;
    cin>>A>>B>>C;
    int D = min(A,B);
    D = min(D,C);
    D==A?cout<<"Draw" : D==B ? cout<<"Bob" : cout<<"Alice";
    cout<<endl;
}