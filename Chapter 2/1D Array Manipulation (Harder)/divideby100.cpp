#include<bits/stdc++.h>
using namespace std;

void solve() {
    string N, M;
    cin >> N >> M;
    if(N == "0") {
        cout << "0\n";
    } else if(N.size() >= M.size() && count(N.begin(), N.end(), '1') == 1) {
        cout << "1";
        for(int i = 0; i < N.size() - M.size(); i++) {
            cout << "0";
        }
        cout << "\n";
    } else if(N.size() < M.size()) {
        cout << "0.";
        for(int i = 0; i < M.size() - N.size() - 1; i++) {
            cout << "0";
        }
        while(N.back() == '0') {
            N = N.substr(0, N.size() - 1);
        }
    } else {
        while()
    }
}

// 101 / 10
// 545 / 100000 = 0.00545

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
