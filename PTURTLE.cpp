#include <iostream>
#define gamelade ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

ll t,a,b,c,Max1,Max2,Max3;
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        Max1=min(a,min(b,c));
        Max3=max(a,max(b,c));
        Max2=a + b + c - Max1 - Max3;
        if(Max1==Max2 and Max2==Max3) {cout<<0<<'\n';}
        else{
            if (Max1==Max2 and Max1<Max3) {Max1+=1; Max2+=1; Max3=(max(Max2,Max3-1));}
            else if (Max1 < Max2 and Max2==Max3) {Max2-=1; Max3-=1; Max1=(min(Max2,Max1+1));}
            else {Max1++; Max3--;}
            cout << (Max3-Max1)*2<<'\n';
        }
    }
     return 0;
}
