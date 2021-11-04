#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;


int main()
{
    int n=0,l[10009],r[10009],lo=0,lc=0,ro=0,rc=0,ans=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>l[i]>>r[i];
        if(l[i]==1) lo++;
        else if(l[i]==0) lc++;
        if(r[i]==1) ro++;
        else if(r[i]==0) rc++;
    }
    if(lo>ro) ans=lc+ro;
    else if((ro==n&&lc==n)||(rc==n&&lo==n)) ans=0;
    else if(lo==ro && lc==rc) ans=min(lo+rc,lc+ro);
    else ans=min(lc+ro,lo+rc);

    cout <<ans<<endl;
    return 0;
}
