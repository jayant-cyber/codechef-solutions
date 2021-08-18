#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    array<int, 10> a;
	    int team1=0,team2=0;
	    for(int i=0;i<10;i++){
	        cin>>a.at(i);
	    }
	    for(int i=0;i<10;i++){
	        if(i%2==0&&a.at(i)==1){
	            team1++;
	        }
	        else if(i%2!=0&&a.at(i)==1){
	            team2++;
	        }
	    }
	    team1==team2 ? cout<<0 : team1>team2 ? cout<<1 : cout<<2;
	    cout<<endl;
	}
	return 0;
}
