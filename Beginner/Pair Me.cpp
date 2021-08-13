#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    x+y==z ? cout<<"YES" : y+z==x ? cout<<"YES" : z+x==y ? cout<<"YES" :cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
