#include<iostream>
using namespace std;

int main() {
	do {
		char input1;
		int input2;

		cout << "Do you like platformers? (y/n)" << endl;
		cin >> input1;
		cout << "On a scale of 10 what difficulty level do you prefer" << endl;
		cin >> input2;
		if (input1 == 'y') {
			if (input2 > 5) {
				cout << "You should try playing super mario brothers" << endl;

			}
			else if (input2 <= 5) {
				cout << "You should try playing kirbys epic yarn" << endl;
			}

		}
		if (input1 == 'n') {
			if (input2 > 5) {
				cout << "You should try playing Dark souls" << endl;

			}
			else if (input2 <= 5) {
				cout << "You should try playing minecraft" << endl;
			}

		};
	} 
	while (true);
	
}