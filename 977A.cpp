#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	long long number,times;
	cin >> number >> times;
	for(int i=0;i<times;i++){
		if(number%10!=0){
			number-=1;
		}
		else{
			number=number/10;
		}
	}
	cout << number <<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}