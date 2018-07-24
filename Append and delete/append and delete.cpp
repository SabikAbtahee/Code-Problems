#include<bits/stdc++.h>                      //START OF EVERY FORMAT
using namespace std;
void file(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}
int findmin(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int findmax(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void run(){
    string first,second;
    int number,firstlength,secondlength,min,max;
    getline(cin,first);
    getline(cin,second);
    cin >> number;
    firstlength=first.length();
    secondlength=second.length();
    min=findmin(firstlength,secondlength);
    max=findmax(firstlength,secondlength);
    int sum=0;
    for(int i=0;i<min;i++){
        if(first[i]!=second[i]){
            sum+=firstlength-i;
            sum+=secondlength-i;
            break;
        }
    }
    if(sum==0){
        if(first!=second){
            sum=abs(firstlength-secondlength);
        }
    }
    if(sum==number){
        cout << "Yes\n";
    }
    else if(sum>number){
        cout << "No\n";
    }
    else if(abs(sum-number)%2==0){
        cout << "Yes\n";
    }
    else if(number>=max+min){
        cout << "Yes\n";
    }
    else if(abs(number-sum)>2*max){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }


    
    
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    file();
    run();
    return 0;
}