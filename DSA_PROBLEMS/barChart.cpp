#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	int* arr = new int[size];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	int max = arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}

	for(int i =max;i>=1;i--){
		for(int j=0;j<size;j++){
			if(arr[j]>=i){
				cout<<"*\t";
			}
			else{
				cout<< "\t";
			}
		}
		cout<<endl;
	}
}

