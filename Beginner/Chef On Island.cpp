#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int x,y,xr,yr,D ;
	    cin>>x>>y>>xr>>yr>>D;
	    min(x/xr,y/yr) >= D ? cout<<"YES" : cout<<"NO" ;
	    cout<<endl;
	}
	return 0;
}
