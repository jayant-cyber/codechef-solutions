#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int amin,bmin,cmin,tmin,a,b,c;
	    cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
	    if(amin <= a && bmin <= b && cmin <= c && tmin <= a+b+c)
	        cout<<"YES";
	    else 
	        cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
