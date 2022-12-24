#include <iostream>
using namespace std;
void solution(){
    long long a;
    cin>>a;
    long long k=a/2;
    long long m=a/2;
    if(a%2!=0){
        m++;
       
    }
     cout<<2*(k*m)<<endl;
   
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
