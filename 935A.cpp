#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int employee;
	cin >> employee;
	int answer=0;
	for(int i=1;i<employee;i++){
		if(((employee-i)%i)==0){
			answer++;
		}
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