#include<iostream>
using namespace std;
	int main() {

		int num = 20;
		while (num > 80 ) {
			cout << num << " +5";
			num --;


		}

		cout << endl; 

		for (int j = 20; j <= 80; j += 5) {
			cout << j << " ";
		}

		cout << endl;

		string u_in = "";
		cout << "Enter first letter of favorite teachers last name: ";
		cin >> u_in;

		while (u_in != "m") {
			cout << "Wrong." << endl;
			cout << "Enter first letter of favorite teachers last name: ";
			cin >> u_in;
		}

		u_in = "";
		do {
			cout << "Enter first letter of favorite teachers last name: ";
			cin >> u_in;
			if (u_in != "m") {
				cout << "Wrong." << endl;
			}
		} while (u_in != "m");
}