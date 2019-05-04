#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int times;
	cin >> times;
	int opinion[times+1];
	string answer="EASY\n";
	for(int i=0;i<times;i++){
		cin >> opinion[i];
		if(opinion[i]==1){
			answer="HARD\n";
		}
	}
	cout << answer;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}