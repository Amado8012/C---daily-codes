#include<iostream> 
using namespace std; 

int main() {
	do {
		char input1;
		char input2;

		cout << " Do you like Football or Basketball? (F/B)" << endl; 
		cin >> input1; 
		cout << "do you like orange or black, or red or blue?" << endl; 
		cin >> input2;
		if (input1 == 'F') {
			if (input2 == 'O') {
				cout << " you shpould be a Broncos fan" << endl; 

			}
			else if (input2 == 'B') {
				cout << "you should root for the Raiders" << endl; 
			}

		}
		if (input1 == 'B') {
			if (input2 == 'b') {
				cout << "you should go to a Nuggets game" << endl;

			}
			else if (input2 == 'R') {
				cout << "you should be a Bulls fan" << endl;
			}
		
		};
	} 
	while (true);

}