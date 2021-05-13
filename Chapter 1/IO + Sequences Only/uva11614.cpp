//https://onlinejudge.org/external/116/11614.pdf
//Date: 13/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
	long long n,t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(int)(-1+sqrt(1+8*n))/2<<"\n";
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
