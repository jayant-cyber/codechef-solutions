#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int a,b;
        for(int i =0; i<N ;i++){
            cin>>a>>b;
        }
        int idkwhythisworks = 0;
        for(int i =1 ;i<=N;i++){
            idkwhythisworks ^= i ;
        }
        std::cout << idkwhythisworks << std::endl;
    }
	return 0;
}
