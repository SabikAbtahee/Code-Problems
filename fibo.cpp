#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
int fib(int n,int *arr){
	if(n<=0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else if(arr[n]==0){
		arr[n]=fib(n-1,arr)+fib(n-2,arr);
	}
	return arr[n];
}

void run(){
	int arr[100];
	memset(arr,0,sizeof(arr));
	// arr[0]=0;
	// arr[1]=1;
	int x=fib(8,arr);
	cout << x<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}

 //INITIALIZING AN ARRAY ALL TO ZERO