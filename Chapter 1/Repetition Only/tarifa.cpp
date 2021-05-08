//https://open.kattis.com/problems/tarifa
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int x,n,ans=0;
    cin>>x>>n;
    while(n--){
        int a;
        cin>>a;
        ans+=(x-a);
    }
    cout<<ans+x<<"\n";
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
