#include<iostream>
using namespace std;

int main(){
	float num1; 
	float num2; 
;
	cout << "give me number" << endl; 
	cin >> num1;

	cout << "give me number" << endl; 
	cin >> num2;

	cout << num1 / num2 << endl; 

	if (num1 < num2) {
		cout << num1;
		cout << num2 << endl;

	}
	else {
		cout << num2;
		cout << num1 << endl; 

	}
	if (num1 == 13) {
		cout << "Bad luck" << endl; 
	}
	if (num2 == 13) {
		cout << "Bad luck" << endl;
	}
	int num3;
	int num4;
	num3 = num1;
	num4 = num2; 
	if (num3 % 2 != 0) {
		cout << "Odd:" << num3 << endl; 
	}
	if (num4 % 2 != 0) {
		cout << "Odd:" << num4 <<  endl; 
	}

}

