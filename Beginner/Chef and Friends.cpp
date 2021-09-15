#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

using namespace std;

void solve();

int main() 
{
    solve();
	return 0;
}

void solve(){
   int n;
   cin>>n;
   string s[n];
   loop(n)      cin>>s[ii];
   string subString[5] = {"ch","he","ef","che","hef"};
   int count=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<5;j++){
           if(s[i].find(subString[j])!= std::string::npos){ 
                count++;
                break;
           }
        }
   }
   cout<<count<<endl;
}