//https://onlinejudge.org/external/118/11805.pdf
//Date: 13/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
	int t,cs=1;
	cin>>t;
	while(t--){
		int n,k,p;
		cin>>n>>k>>p;
		cout<<"Case "<<cs++<<": ";
		int res=((p%n)+k)%n;
		if(res==0){
			cout<<n<<"\n";
		}else{
			cout<<res<<"\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
