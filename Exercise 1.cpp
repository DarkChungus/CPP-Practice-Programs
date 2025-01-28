#include <iostream>
using namespace std;

bool isPrime(int n){
	int c = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		return true;
	}
	else return false;
}

int main(){
	int num;
	cout << "Enter any number to check whether it is a prime or not: ";
	cin >> num;
	if(isPrime(num)){
		cout << num << " is a prime number." << endl;
	}
	else{
		cout << num << " is not a prime number." << endl;
	}
	return 0;
}
