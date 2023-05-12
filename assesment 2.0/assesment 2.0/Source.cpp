#include<iostream>
using namespace std;

int main() {
	char input1;
	char input2;
	do {
		cout << " do you want (i)ce cream or (c)andy " << endl;
		cin >> input1;
		cout << " do you also want (c)hocolate or (f)ruit" << endl;
		cin >> input2;
		if (input1 == 'i') {
			if (input2 == 'c') {
				cout << " you get a hot fudge sunday" << endl;

			}
			else if (input2 == 'f') {
				cout << " you get a strawverry blizzard" << endl;
			}

		}
		if (input1 == 'c') {
			if (input2 == 'c') {
				cout << " you get a hershy bar" << endl;

			}

			if (input2 == 'f') {
				cout << " you get starburst" << endl;
			}
		}

	} while (input1 != 'q');
}