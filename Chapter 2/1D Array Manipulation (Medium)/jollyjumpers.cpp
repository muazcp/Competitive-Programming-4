//link: https://open.kattis.com/problems/jollyjumpers
//Date: 01/08/2021
//Author: Muaz


#include<bits/stdc++.h>
using namespace std;

void Main(){
	int n;
	while(cin>>n){
		vector<int> ar(n);
		for(int& i:ar){
			cin>>i;
		}
		vector<bool> mark(n,0);
		for(int i=1;i<n;i++){
			mark[abs(ar[i]-ar[i-1])]=1;
		}
		bool res=1;
		for(int i=1;i<n;i++){
			res&=mark[i];
		}
		if(res){
			cout<<"Jolly\n";
		}else{
			cout<<"Not Jolly\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
