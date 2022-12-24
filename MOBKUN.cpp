#include  <iostream>
using namespace std;
void solution(){
    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(d %((a*c)+b) == 0){
	    	cout<<"Yes"<<endl;
		}else if(d %((a*c)+b) - (a*(c-1)) > 0){
			cout << "Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
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