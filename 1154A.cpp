#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	long long int x[4];
	for(int i=0;i<4;i++){
		cin >> x[i];
	}
	sort(x,x+4);
	long long a,b,c;
	a=x[3]-x[0];
	b=x[3]-x[1];
	c=x[3]-x[2];

	cout << a <<" "<< b<<" "<< c << "\n";
	

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}