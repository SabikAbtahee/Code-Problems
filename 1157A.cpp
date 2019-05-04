#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

void run2(){
	long long int number;
	cin >> number;
	int count=0;
	if(number>=10){
		count+=1;
	}
	
	while(number>=10){
		count+=10-((number%10)+1);
		number=number/10;
	}
	cout << count+9;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//file();
	run2();
	return 0;
}