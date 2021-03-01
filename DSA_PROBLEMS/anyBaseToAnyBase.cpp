#include <iostream>
using namespace std;

int anyBaseToAnyBase(int n, int b, int tB){
	int ans = 0;
	int power = 1;
	while(n != 0){
		int r = n % tB;
		n /= tB;
		ans += (r*power);
		power *= b;
}
return ans;
}

int main(){
	int num,base,toBase;
	cin>>num>>base>>toBase;
	cout<<anyBaseToAnyBase(num,base,toBase)<<endl;
}
