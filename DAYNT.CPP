#include <iostream>
#include <set>
#include <cstring>
#include <algorithm>
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool a[40000];
void eratos(){
    memset(a,1,sizeof(a));
    a[0]=0;
    a[1]=0;
    for(int i=2;i*i<=40000;i++){
        for(int j=i*i;j*j<=40000;j+=i){
            a[j]=0;
        }
    }
}
int k,n,cnt=0;
int main(){
    faster;
    freopen("DAYNT.INP","r",stdin);
    freopen("DAYNT.OUT","w",stdout);
    cin >> k;
    set<int> v;
    eratos();
    while(cin>>n){
        if(a[n]) {v.insert(n);}
    }
    for(auto i:v){
        cout << i <<" ";
        cnt++;
        if(cnt==k) {break;}
    }
    return 0;
}
