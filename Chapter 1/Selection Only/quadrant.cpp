//Link: https://open.kattis.com/problems/quadrant
//Date: 19.08.2021
//Author: Muaz

#include<bits/stdc++.h>
using namespace std;

void Main(){
	int x,y;
	cin>>x>>y;
	cout<<((x>=0)?((y>=0)?"1":"4"):((y>=0)?"2":"3"))<<"\n";
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
