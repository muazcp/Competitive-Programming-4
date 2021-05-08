//https://open.kattis.com/problems/qaly
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int n;
    cin>>n;
    double a,b,ans=0;
    while(n--){
        cin>>a>>b;
        ans+=(a*b);
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
