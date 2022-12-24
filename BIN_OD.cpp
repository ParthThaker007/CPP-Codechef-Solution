#include <bits/stdc++.h>
using namespace std;
void solution(){
    int n,q;
        cin>>n>>q;
        int a[64][n];
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            for(int j=0; j<64; j++)
            {
                a[j][i]=(int)(x%2);
                x/=2;
            }

        }
        for(int i=0; i<64; i++)
        {
            long long count=0;
            for(int j=0; j<n; j++)
            {
                count+=a[i][j];
                a[i][j]=count;
            }

        }

        while(q--)
        {
            int a1,r1,a2,r2,z;
            cin>>z>>a1>>r1>>a2>>r2;
            a1--;
            a2--;
            r1--;
            r2--;
            int totalfa=r1-a1+1;
            int totalsz=r2-a2+1;
            int totalfom,totalsom;
            if(a1==0)
            {
                totalfom=a[z][r1];
            }
            else
            {
                totalfom=a[z][r1]-a[z][a1-1];
            }
            if(a2==0)
            {
                totalsom=a[z][r2];
            }
            else totalsom=a[z][r2]-a[z][a2-1];
            long ans1=(long)(totalfa-totalfom)*(long)(totalsom)+ (long)(totalfom)*(long)(totalsz-totalsom);
            cout<<ans1<<endl;

        }
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        solution();
        t--;
    }
  return 0;

}
