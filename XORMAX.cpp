#include <iostream>
using namespace std;
void solution(){
    string alice,bob;
	    cin>>alice>>bob;
	    int zem, tront;
	    zem=tront=0;
	    for(int i=0; i<alice.length(); i++){
	        if(alice[i]=='0')
	        zem++;
	        else
	        tront++;
	        if(bob[i]=='0')
	        zem++;
	        else
	        tront++;
	    }
	    int temp=min(zem, tront);
	    string ans="";
	    for(int i=0; i<temp; i++)
	    ans+='1';
	    for(int i=temp; i<alice.length(); i++)
	    ans+='0';
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