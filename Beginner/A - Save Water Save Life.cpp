#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int H,x,y,C;
	    cin>>H>>x>>y>>C;
	    H*(x+(int)(y/2))<=C ? cout<<"YES": cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
