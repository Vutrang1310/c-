#include <iostream>
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

ll tonguoc(ll n){
    ll sum = 0;
    for(ll i = 1;i*i<=n;i++){
        if(n%i==0){
            if(i!=(n/i)){
                sum+=(n/i)+i;
            }
            else{
                sum+=i;
            }
        }
    }
    return sum;
}
ll q,x;
int main(){
    faster;
    freopen("GAME.INP","r",stdin);
    freopen("GAME.OUT","w",stdout);
    cin >> q;
    while(q--){
        cin >> x;
        cout<<tonguoc(x)<<" ";
    }
    return 0;
}
