#include<bits/stdc++.h>   //START OF EVERY FORMAT
using namespace std;
void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

int linearSearch(int *array,int size,int searchKey){
	for(int i=0;i<size;i++){
		if(array[i]==searchKey){
			return i;
		}
	}
	return -1;
}

int binarySearch(int *array,int size,int searchKey){
	int left,right,mid;
	left=0;
	right=size-1;
	while(left<=right){
		mid=(left+right)/2;
		if(array[mid]==searchKey){
			return mid;
		}
		else if(array[mid]<searchKey){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return -1;
}

void selectionSort(int *array,int size){
	int minimum,temp,index;
	for(int i=0;i<size;i++){
		minimum=array[i];
		for(int j=i+1;j<size;j++){
			if(array[j]<minimum){
				minimum=array[j];
				index=j;
			}
		}
		if(array[i]!=minimum){
			temp=array[i];
			array[i]=minimum;
			array[index]=temp;

		}
	}
}

void insertionSort(int *array,int size){
	int temp,j;
	for(int i=1;i<size;i++){
		temp=array[i];
		j=i-1;
		while(array[j]>temp && j>=0){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}
}

void bubbleSort(int *array,int size){
	int swap=true,temp;
	while(swap){
		swap=false;
		for(int i=0;i<size-1;i++){
			
			if(array[i]>array[i+1]){
				temp=array[i+1];
				array[i+1]=array[i];
				array[i]=temp;
				swap=true;
			}


		}
	}
}

void testLinearSearch(){
	int a[10]={11,422,55,60,888,73,19,25,354,21};
	int size=sizeof(a)/sizeof(a[0]);
	int index=linearSearch(a,size,19);
	cout << index;
}

void testBinarySearch(){
	int a[10]={5,10,15,20,25,30,35,40,45,50};
	int size=sizeof(a)/sizeof(a[0]);
	
	int index=binarySearch(a,size,50);
	cout << index;
}

void testSelectionSort(){
	int a[21]={ 3780, 174, 1747, 4728, 1577, 2049, 2296, 750, 731, 1335, 144, 1661, 
		1660, 4712, 3700, 150, 964, 986, 3286, 1034,0};
	int size=sizeof(a)/sizeof(a[0]);
	selectionSort(a,size);
	for(int j=0;j<size;j++){
		cout << a[j]<<" ";
	}
	cout << "\n";
}

void testInsertionSort(){
	int a[21]={ 3780, 174, 1747, 4728, 1577, 2049, 2296, 750, 731, 1335, 144, 1661, 
		1660, 4712, 3700, 150, 964, 986, 3286, 1034,0};
	int size=sizeof(a)/sizeof(a[0]);
	insertionSort(a,size);
	for(int j=0;j<size;j++){
		cout << a[j]<<" ";
	}
}

void testBubbleSort(){
	int a[21]={ 3780, 174, 1747, 4728, 1577, 2049, 2296, 750, 731, 1335, 144, 1661, 
		1660, 4712, 3700, 150, 964, 986, 3286, 1034,0};
	int size=sizeof(a)/sizeof(a[0]);
	bubbleSort(a,size);
	for(int j=0;j<size;j++){
		cout << a[j]<<" ";
	}
	cout << "\n";
}

void run(){

	// testLinearSearch();
	// testBinarySearch();
	// testSelectionSort();
	// testInsertionSort();
	testBubbleSort();
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	file();
	run();
	return 0;
}