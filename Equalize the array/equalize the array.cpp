#include<bits/stdc++.h>                      //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int num;
	cin >> num;
	int a[num];
	int max=0;
	map<int,int> count;
	for(int i=0;i<num;i++){
		cin >> a[i];
		count[a[i]]++;
		
	}
	for(map<int,int>::iterator it=count.begin();it!=count.end();++it){
		
		if((it->second)>=max){
			max=it->second;
		}
	}
	cout << num-max <<"\n";

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}