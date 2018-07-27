#include<iostream>
#include<vector>
using namespace std;

void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void nextMove(int posr, int posc, vector <string> board) {
    int bx,by,px,py;
    bx=posr;
    by=posc;
    for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			
			
			if(board[i][j]=='d'){
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
			break;
			updown++;
		}
	}
	else if(updown>0){
		while(updown!=0){
			cout << "DOWN\n";
			break;
			updown--;
		}	
	}
	else if(leftright<0){
		while(leftright!=0){
			cout << "LEFT\n";
			break;
			leftright++;
		}
	}
	else if(leftright>0){
		while(leftright!=0){
			cout << "RIGHT\n";
			break;
			leftright--;
		}
	}

}
void run(){
	int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
}
int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
    
    return 0;
}