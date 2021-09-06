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
    int A1,A2,A3;
    cin>>A1>>A2>>A3;
    int B1,B2,B3;
    cin>>B1>>B2>>B3;
    if((A1+A2+A3)==(B1+B2+B3)) cout<<"Pass";
    else cout<<"Fail";
    cout<<endl;
}