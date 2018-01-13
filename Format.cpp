#include<bits/stdc++.h>

using namespace std;

string separateSentence(string x);
string IntToStr(int x);
int strToInt(string x);
int charToInt(char x);

void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

void run(){
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}
//////////////////////////////////////////////////**********************/////////////////////

int strToInt(string x){
	int number;
	istringstream(x) >> number;
	return number;
}
string IntToStr(int x){
	string str;
	//str=to_string(x);
	ostringstream ss;
	ss << x;
	return ss.str();
}
string separateSentence(string x){
	istringstream iss(x);
	string word;
	while(iss >> word){
		cout << word <<"\n";
	}
	return x;
}
int charToInt(char x){
	int p=int(x)-48;
	return p;
}


long long decimalToBinary(long long n){
	long long binaryNumber = 0;
    int R, i = 1, step = 1;

    while (n!=0)
    {
        R = n%2;
        n /= 2;
        binaryNumber += R*i;
        i *= 10;
    }
    return binaryNumber;
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int *a=new int[n];

int poww(int first,int second){
	int x=1;
	if(second==0){
		return 1;
	}
	else{
		for(int i=0;i<second;i++){
			x=x*first;
		}
	}
	return x;

}






#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}

memset(arr,0,sizeof(arr)); //INITIALIZING AN ARRAY ALL TO ZERO