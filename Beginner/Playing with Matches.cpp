#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int T;
    cin>>T;
    while(T--){
        int A,B;
        cin>>A>>B;
        int C=A+B,k,sum=0;
        while(C>0){
            k=C%10;
            C/=10;
            switch(k){
                case 0 : sum+=6; break; 
                case 1 : sum+=2; break; 
                case 2 : sum+=5; break; 
                case 3 : sum+=5; break; 
                case 4 : sum+=4; break;
                case 5 : sum+=5; break;
                case 6 : sum+=6; break;
                case 7 : sum+=3; break;
                case 8 : sum+=7; break;
                case 9 : sum+=6; break;
            }
        }
        cout<<sum<<endl;
    }
    
	return 0;
}
