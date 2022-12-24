#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    
    for(int i=0;i<n;i++){
        if(a[i]%2){
            count++;
        }
        
    }
    if(count==0  || count%2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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
