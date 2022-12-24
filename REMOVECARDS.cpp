#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int a[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c[i]++;
            }
        }
    }
    int cat = c[0];
    for(int i=0;i<n;i++){
        if(cat<c[i]){
            cat=c[i];
        }
    }
    cout<<n-cat<<endl;
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
