#include <iostream>
using namespace std;
int main() {

	int number; 
	cout << " how many cookies do you have? " << endl; 
	cin >> number;
	if (number < 5)
		cout << " ypu don't have enough cookies, her take one of mine " << endl;
	else if (number <= 10)
		cout << " you have the perfect amount of cookies " << endl;
	else 
		cout << " you have to many cookies you should give me one " << endl; 



	char choice;
	cout << " who do you like the best bart simpson, scooby doo, rick, daffy duck, or buggs bunny " << endl; 
	cin >> choice; 
	if (choice == 'b')
		cout << " eat my shorts " << endl;
	else if (choice == 's')
		cout << " scooby dobby doo" << endl;
	else if (choice == 'r')
		cout << " wubba lubba dub dub" << endl;
	else if (choice == 'd')
		cout << " sufferin succotash " << endl;
	else if (choice == 'B')
		cout << " what's up doc " << endl; 



	

}