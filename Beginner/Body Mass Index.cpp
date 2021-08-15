#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int M , H;
	    cin>>M>>H;
	    int BMI = M/pow(H,2);
        if(BMI<=18) cout<<1;
        else if(BMI>=19&&BMI<=24) cout<<2;
        else if(BMI>=25&&BMI<=29) cout<<3;
        else cout<<4;
        cout<<endl;
	}
	return 0;
}
