#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int R;
	    cin>>R;
	    if(R<1600) cout<<3;
	    else if(R >= 1600 && R < 2000) cout<<2;
	    else cout<<1;
	    cout<<endl;
	}
	return 0;
}
