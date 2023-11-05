#include <iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    stack<char> st;
    cin >> n;
    while(n>0) {
        st.push(n%2+'0');
        n/=2;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}



