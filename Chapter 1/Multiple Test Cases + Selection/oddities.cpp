//https://open.kattis.com/problems/oddities
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int n;
    cin>>n;
    if(n&1){
        cout<<n<<" is odd\n";
    }else{
        cout<<n<<" is even\n";
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        Main();
    }
    return 0;
}
