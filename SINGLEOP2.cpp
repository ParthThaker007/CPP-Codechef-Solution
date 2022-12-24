#include <iostream>
using namespace std;
void solution(){
    int n,count=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=1;i<n;i++){
        if(a[i]=='0'){
            
             count++;
        }
        else{
           break;
        }
    }
    cout<<count+1<<endl;
    
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

