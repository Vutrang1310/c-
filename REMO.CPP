#include<iostream>
#include<algorithm>
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int t,n;
int main(){
     faster;
     freopen("REMO.INP","r",stdin);
     freopen("REMO.OUT","w",stdout);
     cin>>t;
     while(t--){
        cin>>n;
        ll a[n],b[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n-1);
        if(n==2){
            if(b[0]-a[1]<0){
                cout<<(b[0]-a[0])<<'\n';
            }
            else if(b[0]-a[0]<0){
                cout<<(b[0]-a[1])<<'\n';
            }
           else{cout<<min((b[0]-a[0]),(b[0]-a[1]))<<'\n';}
        }
        else if(b[0]-a[0]==(b[1]-a[1])){cout<<b[0]-a[0]<<'\n';}
        else if(b[n-2]-a[n-1]==(b[n-3]-a[n-2])){cout<<b[n-2]-a[n-1]<<'\n';}
        else{cout<<(b[0]-a[0])<<'\n';}
    }
    return 0;
}
