#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int x1 , x2, y1, y2, z1 , z2;
	    cin>>x1 >> x2>> y1>> y2>> z1 >> z2;
	    if(x1<=x2 && y1<=y2 && z1 >= z2) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
