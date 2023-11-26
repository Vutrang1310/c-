#include <iostream>
#define ll unsigned long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll a,b,cnt=0,x;
int main(){
    faster;
    freopen("CHIAHET.INP","r",stdin);
    freopen("CHIAHET.OUT","w",stdout);
    cin >> a >> b >> x;
    if(a%x==0) {cnt=(b/x)-(a/x)+1;}
    else {cnt=(b/x)-(a/x);}
    cout << cnt;
    return 0;
}

