//Link: https://open.kattis.com/problems/hothike
//Date: 15.08.2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
	int n;
	cin>>n;
	vector<int> temp(n);
	for(int& i:temp){
		cin>>i;
	}
	int day=0, mx_temp=41;
	for(int i=0;i<n-2;i++){
		if(max(temp[i],temp[i+2])<mx_temp){
			day=i+1;
			mx_temp=max(temp[i],temp[i+2]);
		}
	}
	cout<<day<<" "<<mx_temp<<"\n";
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
