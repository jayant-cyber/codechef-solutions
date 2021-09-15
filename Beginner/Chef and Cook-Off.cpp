#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

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
   int a,count=0;;
   for(int i=0;i<5;i++){
       cin>>a;
       if(a==1) count++;
   }
   switch(count){
       case 0 : cout<<"Beginner";           break;
       case 1 : cout<<"Junior Developer";   break;
       case 2 : cout<<"Middle Developer";   break;
       case 3 : cout<<"Senior Developer";   break;
       case 4 : cout<<"Hacker";             break;
       case 5 : cout<<"Jeff Dean";          break;
   }
   cout<<endl;
}