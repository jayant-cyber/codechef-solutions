#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ii ++ )

using namespace std;

void solve();

int main() 
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}

void solve(){
   int n,x=0,y=0; cin>>n;
	    string s; cin>>s;
	    for(int i=0;s[i]!='\0';i++) if(i==0) switch(s[i]) { case 'L' : x--; break; 
	                                                        case 'R' : x++; break;
	                                                        case 'U' : y++; break;
	                                                        case 'D' : y--; break;}
	                                else { if((s[i]=='L')&&(s[i-1]=='U'||s[i-1]=='D')) x--;
	                                       if((s[i]=='R')&&(s[i-1]=='U'||s[i-1]=='D')) x++;
	                                       if((s[i]=='U')&&(s[i-1]=='L'||s[i-1]=='R')) y++;
	                                       if((s[i]=='D')&&(s[i-1]=='L'||s[i-1]=='R')) y--;}
	    cout<<x<<" "<<y<<endl;
}