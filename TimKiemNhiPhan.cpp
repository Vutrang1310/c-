#include<iostream>
using namespace std;

int Binary(int a[],int n, int x){
  int l=0,r = n - 1;
  while (l < r){
    int mid = (l + r) / 2;
    if(a[mid] < x) {
      l = mid + 1;
    }
    if (a[mid] > x){
      r = mid;
    }
  }
  if(a[l] == x) {return l;}
  return -1;
}
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0;i< n; i++){
    cin >> a[i];
  }
  cin >> x;
  cout <<Binary(a,n,x);
  return 0;
}
