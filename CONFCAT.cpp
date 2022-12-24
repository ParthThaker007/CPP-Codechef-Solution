#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max = i;
        }
    }
    if(max==0){
        cout<<-1<<endl;
    }
    else{
        cout<<max<<endl;
        for(int i=0;i<max;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        cout<<n-max<<endl;
        for(int i=max;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
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
