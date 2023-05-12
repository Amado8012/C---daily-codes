#include<iostream>
using namespace std; 

int add5divide2(int x); 
bool pointcollition(int x1, int y1, int x2, int y2);
void toygrabber();

int main() {
	cout << add5divide2(5) << endl; 
	cout << pointcollition(5, 10, 2, 8) << endl;
	toygrabber();
}

int add5divide2(int x) {
	return (x + 5) / 2;
	
}

bool pointcollition(int x1, int y1, int x2, int y2) {
	if (x1 == x2 && y1 == y2)
		return true;
	else return false; 
}

void toygrabber() {
	int num = rand() % 100; 
	if (num < 20)
		cout << "you got a ball" << endl;
	else (num < 30);
		cout << "you got a fidget spiner" << endl; 
	else (num < 50);
		cout << "you got a hotwheelse car" << endl; 
}

