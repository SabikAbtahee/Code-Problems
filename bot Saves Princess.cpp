#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int grid;
	cin >> grid;
	char x;
	int bx,by,px,py;
	for(int i=0;i<grid;i++){
		for(int j=0;j<grid;j++){
			cin >> x;
			if(x=='m'){
				bx=i;
				by=j;
			}
			if(x=='p'){
				px=i;
				py=j;
			}
		}
	}
	int updown=px-bx;
	int leftright=py-by;
	if(updown<0){
		while(updown!=0){
			cout << "UP\n";
			updown++;
		}
	}
	if(updown>0){
		while(updown!=0){
			cout << "DOWN\n";
			updown--;
		}	
	}
	if(leftright<0){
		while(leftright!=0){
			cout << "LEFT\n";
			leftright++;
		}
	}
	if(leftright>0){
		while(leftright!=0){
			cout << "RIGHT\n";
			leftright--;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}