#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int money;
	cin >> money;
	int answer=0;
	int x[]={1,5,10,20,100};
	int i=4;
	while(money!=0){
		answer+=money/x[i];
		money=money%x[i];
		i--;
	}
	cout << answer <<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}