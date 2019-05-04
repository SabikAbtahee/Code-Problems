#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int types;
	int answer=0;
	cin >> types;
	
	string falseLine;
	getline(cin,falseLine);
	string typeNames[types+1];
	for(int i=0;i<types;i++){
		getline(cin,typeNames[i]);
		if(typeNames[i]=="Tetrahedron"){
			answer+=4;
		}
		else if(typeNames[i]=="Cube"){
			answer+=6;
		}
		else if(typeNames[i]=="Octahedron"){
			answer+=8;
		}

		else if(typeNames[i]=="Dodecahedron"){
					answer+=12;
		}

		else if(typeNames[i]=="Icosahedron"){
					answer+=20;
		}

	}
	cout << answer <<"\n";

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//file();
	run();
	return 0;
}