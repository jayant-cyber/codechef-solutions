#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        (n*m)%2==0 ? cout<< "YES" : cout<< "NO" ;
        cout<<endl;
    }
	return 0;
}
