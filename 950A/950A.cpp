#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int l,r,a;
	cin >> l >> r >> a;
	int dif,max,countDif,min,ans;
	if(l<r){
		dif = r-l;
		max=r;	
		min=l;
	}
	else{
		dif = l-r;
		max=l;
		min=r;
	}
	if(dif<=a){
		countDif=a-dif;
		max*=2;
		max+=((countDif/2)*2);
		
		ans=max;
				
	}
	else{
		min+=a;
		min*=2;
		ans=min;
	}
	cout << ans << "\n";

}
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	//file();
	run();
	return 0;
}
