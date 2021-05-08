//https://open.kattis.com/problems/judgingmoose
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int a,b;
    cin>>a>>b;
    if(a+b==0){
        cout<<"Not a moose\n";
    }else if(a!=b){
        cout<<"Odd "<<max(a,b)*2<<"\n";
    }else{
        cout<<"Even "<<max(a,b)*2<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
