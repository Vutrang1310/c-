#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n,x,res=0,k;
int main(){
    faster;
    freopen("activity.INP", "r", stdin);
    freopen("activity.OUT", "w", stdout);
    cin >> n >> x;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll l=0,r=n-1;
    while(l<=r){
        if(v[l]+v[r]<=x) {l++;r--;res++;}
        else{r--;res++;}
    }
    cout << res;
return 0;
}

