// Only perfect squared numbered bulbs will remain on as the factors of perfect // squares are odd

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of bulbs: "<<endl;
        cin>>n;

	for(int i=1;i<sqrt(n);i++){
		cout<<i*i<<" "<<endl;
}

return 0;
}
