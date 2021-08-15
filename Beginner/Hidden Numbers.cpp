#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    if(n%2==0){
	        cout<<2<<" "<<n/2;
	    }
	    else {
	        cout<<1<<" "<<n;
	    }
	    cout<<endl;
	}
	return 0;
}
