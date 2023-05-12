#include<iostream> 
using namespace std;

int main() {

	int choice;
	cout << "entyer song choice:" << endl; 
	cout << "(1)sing me a song,you're a singer, (2) it's not in the way that you hold me, (3) tonight i wanna give it all to you, (4) end of passion play crumbling away" << endl; 
	cin >> choice; 

	switch (choice) {
	case 1:
		cout << "sing me a song,you're a singer" << endl;
		break;
	case 2:
		cout << " it's not in the way that you hold me" << endl; 
		break;
	case 3:
		cout << "tonight i wanna give it all to you" << endl; 
		break;
	case 4:
		cout << " end of passion play crumbling away" << endl;
		break;
	default:
		cout << " sorry, nmot an option" << endl;
	
	}//end of switch


}//end of main 