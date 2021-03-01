#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n,k;
  cout<<"Enter the number: "<<endl;
  cin>>n;
  cout<<"Enter the value of k: "<<endl;
  cin>>k;
  int temp = n;
  int count = 0;
  while(temp!=0){
	temp/=10;
	count++;
}

  if(k<0){
	k = k + count;
}

  k = k%n;    
 
  int divisor = pow(10,k);
  int mult = pow(10, count-k);
  
  int quotient = n/divisor;
  int remainder = n%divisor;
  int ans = (remainder*mult) + quotient;

  cout << ans<<endl;
}
  
  
