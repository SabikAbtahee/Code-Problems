#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int n,q,x,c,b,y;
	cin >> n >> q;
	vector<int> a[n];
	for(int i=0;i<n;i++){
		cin >> x;
		a[i].push_back(x);
		for(int j=0;j<x;j++){
			cin >>  y;
			a[i].push_back(y);
		}
	}
	for(int i=0;i<q;i++){
		cin >> c >>b;
		cout << a[c].at(b+1)<<"\n";
	}
	

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}