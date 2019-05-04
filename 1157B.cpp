
#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
long long charToInt(char x){
	long long p=int(x)-48;
	return p;
}
string IntToStr(long long x){
	string str;
	//str=to_string(x);
	ostringstream ss;
	ss << x;
	return ss.str();
}
long long strToInt(string x){
	long long  number;
	istringstream(x) >> number;
	return number;
}
void run(){
	//take input
	long long a;
	string number,falseLine;
	vector<long long> myvec,myrange,myvec2; 
	cin >> a ;
	getline(cin,falseLine);
	getline(cin,number);
	long long f[11];
	char f2[11];
	long long x;
	//get important or valuable number in a vector
	for(long long i=1;i<10;i++){
		cin >> x;
		f[i]=x;
		f2[i]='0'+(x);
		if(x>i){
			myvec.push_back(i);
		}
		if(x==i){
			myvec2.push_back(i);
		}
	}

	// sort(num, num+10); 

	long long temp,p=0;
	bool found=false;
	set<char> st;
	//get first subset in number
	for(long long k=0;k<a;k++){
		if(count(myvec.begin(), myvec.end(), charToInt(number[k]))>0){
			myrange.push_back(k);
			st.insert(number[k]);
			if(!found){
				myvec.insert(myvec.end(), myvec2.begin(), myvec2.end());	
			}
			
			// cout << f[charToInt(number[k])]<<"\n";
			number.replace(k,1,IntToStr(f[charToInt(number[k])]));
			found=true;
		}
		else if(found){
			break;
		}
	}
	cout << number <<"\n";

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// file();
	run();
	return 0;
}