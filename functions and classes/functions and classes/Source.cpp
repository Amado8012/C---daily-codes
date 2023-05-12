#include <iostream>
using namespace std;

float numbers(int a, int b ); 

int main() {

	//ask for and store two numbers
	int num1;
	int num2;
	cout << "give me two numbers" << endl; 
	cin >> num1; 
	cin >> num2; 

	cout << "average:" << numbers(5, 10); //function call 
}


//function definition 
float numbers(int a, int b){
	cout << "added together: " << a + b << endl;
	cout << "difference is " << a - b << endl; 
	cout << "product is " << a * b << endl; 
	cout << "quotient is " << a / b << endl; 


	return (a + b) / 2; //try putting average in here
}
