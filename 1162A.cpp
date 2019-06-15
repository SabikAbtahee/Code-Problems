#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void run(){
	int n,h,m;
	cin >> n >> h >> m;

	int l,r,x,temp1,temp2;
	int arr[n+1],start[n+1],end[n+1];

	for(int i=0;i<n;i++){
		arr[i]=h;

	}
	memset(start,0,sizeof(start));
	memset(end,0,sizeof(end));
	set<int> count; 
	count.insert(h);

	for(int i=0;i<m;i++){
		cin >> l >> r >> x;
		start[l-1]=x;
		end[r-1]=-x;
	}

	for(int i=0;i<n;i++){
		if(start[i]>0){
			count.insert(start[i]);
			arr[i]=*count.begin();
		}
		if(start[i]==0){
			arr[i]=*count.begin();
		}
		if(end[i]<0){
			count.insert(-end[i]);
			arr[i]=*count.begin();
			count.erase(-end[i]);
		}
		
		
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=(arr[i]*arr[i]);
	}
	cout << sum <<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}