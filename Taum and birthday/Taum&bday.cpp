#include<bits/stdc++.h>                      //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
int gmin(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
void run2(){
	long long int black,white;
	cin >> black >> white;
	long long int bc,wc,z,sum[3],sum1;
	cin >> bc >> wc >> z;

	sum[0]=(black*bc)+(white*wc);
	sum[1]=(black+white)*bc+(white*z);
	sum[2]=(black+white)*wc+(black*z);
	
	sum1=sum[0];
	for(int i=0;i<3;i++){
		if(sum[i]<=sum1){
			sum1=sum[i];
		}
	}
	cout << sum1 <<"\n";

}
void run(){
	int testCase;
	cin >> testCase;
	while(testCase!=0){
		run2();
		testCase--;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}