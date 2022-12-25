#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=0,k=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            m++;
        }
        else{
            k++;
        }
    }
    if(n%2==0){
        if(m%2 && k%2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
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
