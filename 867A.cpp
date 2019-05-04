#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int times;
	cin >> times;
	string falseLine,destinations;
	getline(cin,falseLine);
	getline(cin,destinations);
	int seatle=0,francisco=0;
	for(int i=0;i<times-1;i++){
		if(destinations[i]=='S' && destinations[i+1]=='F'){
			seatle+=1;
		}
		else if(destinations[i]=='F' && destinations[i+1]=='S'){
			francisco+=1;
		}
	}
	if(seatle>francisco){
		cout <<"YES" <<"\n";
	}
	else{
		cout << "NO" <<"\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}