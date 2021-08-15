#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    array<int, 5> a = {2010, 2015, 2016, 2017 ,2019} ;
	    int n;
	    cin>>n;
	    bool res = false;
	    for(auto i : a){
	        if(i==n){
	            res = true;
	            break;
	        }
	    }
	    res ? cout<<"HOSTED ": cout<<"NOT HOSTED";
	    cout<<endl;
	    
	}
	return 0;
}
