//https://open.kattis.com/problems/isithalloween
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    string s;
    int n;
    cin>>s>>n;
    if(s=="OCT"&&n==31){
        cout<<"yup\n";
    }else if(s=="DEC"&&n==25){
        cout<<"yup\n";
    }else{
        cout<<"nope\n";
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    Main();
    return 0;
}
