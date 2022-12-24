#include <iostream>
using namespace std;
void solution(){
     long long int alice,kak;
	    cin>>alice>>kak;
	    long long int ans = (alice*(alice-1))/2;
	    if(kak<alice/2){
	        long long x = alice-2*kak;
	         ans -= (x*(x-1))/2;
	    }
	    cout<<ans<<endl;
    
}
int main() {
	int t;
	cin>>t;
	while(t>0){
	   solution();
	   t--;
	}
	return 0;
}