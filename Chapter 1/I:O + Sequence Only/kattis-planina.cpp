#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int temp = pow(2, n) + 1;
    cout << temp * temp << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}