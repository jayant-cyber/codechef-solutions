#include <bits/stdc++.h>
using namespace std;

int main() 
{   int T;
    cin>>T;
    while(T--){
    string s1,s2;
    cin>>s1>>s2;
    int min = 0;
    int max = 0;
    for(int i=0;i<s1.length();i++){
        max++;
        if(s1[i] !='?' && s2[i] != '?'){
            s1[i] == s2[i] ? max -- : min++ ;
        }
    }
    cout<<min << " " <<max<<endl;
    }
	return 0;
}
