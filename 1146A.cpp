#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	string a;
	getline(cin,a);
	int length=a.length();
	
	int counta=0;
	for(int i=0;i<length;i++){
		if(a[i]=='a'){
			counta+=1;
		}
	}
	if(counta>(length/2)){
		cout << length <<"\n";
	}
	else{
		cout << counta+(counta-1) <<"\n";
	}

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}