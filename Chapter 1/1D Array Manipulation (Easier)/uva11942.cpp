#include<bits/stdc++.h>
using namespace std;

void Main(){
	int n;
	cin>>n;
	cout<<"Lumberjacks:\n";
	while(n--){
		vector<int> ar(10);
		for(int& i:ar){
			cin>>i;
		}
		if(is_sorted(ar.begin(),ar.end()) || is_sorted(ar.rbegin(),ar.rend())){
			cout<<"Ordered\n";
		}else{
			cout<<"Unordered\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	Main();
	return 0;
}
