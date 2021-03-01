#include <iostream>
using namespace std;

int getSum(int b, int n1, int n2){
        int ans = 0;
        int carry = 0;
        int power = 1;

        while(n1 !=0 || n2 != 0 || carry !=0){
                int ld1 = n1%10;
                int ld2 = n2%10;
                n1 /= 10;
                n2 /= 10;

                int sum = ld1 + ld2 + carry;
                int q = sum/b;
                int r = sum%b;

                ans += (r*power);
                carry = q;
                power *= 10;
        }
        return ans;
}

int gpwsd(int b, int n1, int d2){
	int ans = 0;
	int carry = 0;
 	int power = 1;

	while(n1!=0 || carry!=0){
		int ld1 = n1%10;
		n1 /= 10;

		int product = ld1*d2 + carry;
		int r = product%b;
		int q = product/b;

		ans += (r*power);
		carry = q;
		power *=10;
	}
	return ans;
}

int getMultiplication(int b, int n1, int n2){
	int ans = 0;
	int power = 1;
	
	while(n2!=0){
		int ld2 = n2%10;
		n2 /= 10;
		int pwsd = gpwsd(b,n1,ld2);
		ans = getSum(b,ans,pwsd*power);
		power *= 10;
	}
	return ans;
}

int main(){
	int b,n1,n2;
	cin>>b>>n1>>n2;
	cout<<getMultiplication(b,n1,n2)<<endl;
}
