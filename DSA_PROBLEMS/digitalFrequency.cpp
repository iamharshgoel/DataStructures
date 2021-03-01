#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n,int d){
	 int count = 0;
        while(n!=0){
                int r = n%10;
                n/=10;
                if(r == d){
                        count++;
                }
        }
	return count;
}

int main(){
	int n,d;
	cin>>n>>d;
	cout<<countDigits(n,d)<<endl;
}
