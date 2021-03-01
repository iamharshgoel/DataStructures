#include <iostream>
#include <cmath>

using namespace std;

int decimalToAnyBase(int n, int t){
        int ans = 0;
	int power = 1;
	while(n != 0){
		int r = n%t;
		n /= t;
		ans += (r * power);
		power *= 10;
	}
	return ans;
}
		

int main(){
	int num, base;
	cin>>num>>base;
	cout << decimalToAnyBase(num, base)<<endl;
}
