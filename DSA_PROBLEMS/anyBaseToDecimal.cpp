#include <iostream>
using namespace std;

int anyBaseToDecimal(int n ,int b){
	int ans = 0;
	int power = 1;
	while(n != 0){
		int r = n%10;
		n /= 10;
		ans += (r*power);
		power *= b;
	}
	return ans;
}

int main(){
	int num, base;
	cin>>num>>base;
	cout<<anyBaseToDecimal(num,base)<<endl;
}
