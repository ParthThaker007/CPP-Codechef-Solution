#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string K="";
    int i=0;
    int j=n-1;
    while(i<=j){
        if(s[i]=='0'){
            K=s[i]+K;
        }
        else{
         K=K+s[i];
        }
        if(i<j){
            if(s[j]=='0'){
                K=K+s[j];
            }
            else{
                K=s[j]+K;
            }
                j--;
            
        }
        i++;
    }
    cout<<K<<endl;
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
