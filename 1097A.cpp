#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	string cardOnDeck,cardsOnHand;
	getline(cin,cardOnDeck);
	getline(cin,cardsOnHand);
	
	string answer="NO\n";
	for(int i=0;i<13;i=i+3){
		if(cardsOnHand[i]==cardOnDeck[0]){
			answer="YES\n";
		}	
		if(cardsOnHand[i+1]==cardOnDeck[1]){
			answer="YES\n";
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