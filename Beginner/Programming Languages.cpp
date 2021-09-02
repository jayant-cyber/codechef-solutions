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
    int A,B,A1,B1,A2,B2;
    cin>>A>>B>>A1>>B1>>A2>>B2;
    if((A==A1||A==B1)&&(B==A1||B==B1)) cout<<1;
    else if((A==A2||A==B2)&&(B==A2||B==B2)) cout<<2;
    else cout<<0;
    cout<<endl;
    
}