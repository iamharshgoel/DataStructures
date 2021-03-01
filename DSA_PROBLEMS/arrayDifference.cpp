#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[100000];
	int sum_odd = 0;
	int sum_even = 0;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i=i+2){
		sum_even += arr[i];
	}
	for(int i=1;i<n;i=i+2){
                 sum_odd += arr[i];
         }

	cout<< sum_odd-sum_even <<endl;
}
                   
		
