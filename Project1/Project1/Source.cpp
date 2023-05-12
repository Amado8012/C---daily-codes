#include <iostream>
using namespace std;
int main() {

	int age;
	cout << " How old are you: ? " << endl;
	cin >> age;
	if (age <= 13)
		cout << "Sorry you are too young to play this game " << endl;
	else if (age < 18)
		cout << " you need parent permisson to play this game " << endl;
	else
		cout << " Welcome to The Game ! " << endl;









	char choice;
	cout << "What is Your Favorite Animal  Dogs, Cats, or Birds  ? " << endl;
	cin >> choice;
	if (choice == 'd')
		cout << " woof!" << endl;
	else if (choice == 'c')
		cout << "meow!" << endl;
	else if (choice == 'b')
		cout << "chirp" << endl;



}

