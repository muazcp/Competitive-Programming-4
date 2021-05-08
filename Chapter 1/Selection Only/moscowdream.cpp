//https://open.kattis.com/problems/moscowdream
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if(a>0&&b>0&&c>0&&a+b+c>=n&&n>=3){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
