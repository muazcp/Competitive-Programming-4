#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    int res = (k + p) % n;
    cout << (res == 0 ? n : res) << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T, cs = 1;
    cin >> T;
    while(T--) {
        cout << "Case " << cs++ << ": ";
        solve();
    }
    return 0;
}