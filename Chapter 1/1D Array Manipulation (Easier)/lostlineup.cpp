//link: https://open.kattis.com/problems/lostlineup
//Date: 08/05/2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
	int n;
	cin>>n;
	vector<int> ar(n-1);
	for(int i=1;i<n;i++){
		int x;
		cin>>x;
		ar[x]=i+1;
	}
	cout<<1<<" ";
	for(int i:ar){
		cout<<i<<" ";
	}
	cout<<"\n";
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
