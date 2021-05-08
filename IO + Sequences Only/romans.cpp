//https://open.kattis.com/problems/romans
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    double x;
    cin>>x;
    cout<<(int)round(x*5280/4854*1000)<<"\n";
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
