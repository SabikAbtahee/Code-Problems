#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int x;
	cin >>x;
	long long int a[x],min=-100000001,max=100000001;
	for(int i=0;i<x;i++){
		cin >> a[i];

	}
	max=a[0];
	min=a[0];
	for(int j=1;j<x;j++){
		if(a[j]>max){
			max=a[j];
		}
		if(a[j]<min){
			min=a[j];
		}
	}
	cout << "Result = "<<max-min <<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}