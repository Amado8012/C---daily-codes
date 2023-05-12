#include<iostream> 
using namespace std; 
int main() {
	

	for (int j = 6; j <= 22; j += 2) {
		cout << j << " "; 
		}

	cout << endl; 

	string u_in = "";
	cout << "MOO!" << endl; 
	cin >> u_in; 

	while (u_in != "c") {
		cout << "worng" << endl; 
		cout << " MOO!" << endl; 
		cin >> u_in; 
	}

	u_in = "";
	do {
		cout << "MOO!" << endl; 
		cin >> u_in; 
		if (u_in != "c") {
			cout << "wrong" << endl;
		}
	}
}