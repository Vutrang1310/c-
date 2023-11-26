#include <iostream>
#include <vector>
#define faster  ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    freopen("DIVARR.inp","r",stdin);
    freopen("DIVARR.out","w",stdout);
    faster;
    int N,tmp;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        A.push_back(tmp);
    }
    if (N == 1) {
        cout << 1 ;
        return 0;
    }
    int cnt = 0, i = 0;
    while (i < N - 1) {
        int a1 = A[i];
        int a2 = A[i + 1];
        if (a1 == a2) {
            i += 1;
            continue;
        }
        if (a1 < a2) {
            while (i < N - 1 and A[i] <= A[i + 1]) {
                i += 1;
            }
        }
        if (a1 > a2) {
            while (i < N - 1 and A[i] >= A[i + 1]) {
                i += 1;
            }
        }
        cnt += 1;
        i += 1;
    }
    if (i == N - 1) {
        cnt += 1;
    }
    cout << cnt;
    return 0;
}
