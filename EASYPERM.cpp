#include <iostream>
using namespace std;
void solution()
{
    int n,i;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        solution();
        t--;
    }
	return 0;
}
