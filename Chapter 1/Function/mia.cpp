//https://open.kattis.com/problems/mia
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        if(a+b+c+d==0)return;
        string x,y;
        x=to_string(a)+to_string(b);
        y=to_string(c)+to_string(d);
        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        if(x==y){
            cout<<"Tie.\n";
        }else if(x=="21"){
            cout<<"Player 1 wins.\n";
        }else if(y=="21"){
            cout<<"Player 2 wins.\n";
        }else if(x[0]==x[1]&&y[0]!=y[1]){
            cout<<"Player 1 wins.\n";
        }else if(y[0]==y[1]&&x[0]!=x[1]){
            cout<<"Player 2 wins.\n";
        }else{
            cout<<"Player "<<(x>y?1:2)<<" wins.\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Main();
    return 0;
}
