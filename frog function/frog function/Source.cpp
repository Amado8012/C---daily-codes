#include<iostream>
using namespace std;

void frog(int x);
float BoxVolume(int h, int w, int l);
int VariableAverage(int num);

int main() {
	
	

	frog(5);
	cout << BoxVolume(5, 5, 5) << endl;
	cout << VariableAverage(50) << endl; 

}

void frog(int x) {
	
	cout << "Ribbit!!!!!!!" << endl;

	for (int i = 1; i <= x; i++)
		cout << " Ribbit " << endl;
	
}

float BoxVolume(int h, int w, int l) {


	

	
 return	h* w* l;
		

}


int VariableAverage(int num) {

	int input;
	int inpu2;
	cout << " This the average b " << endl;
		cin >> input; 
		cin >> inpu2;
		return (input + inpu2) / 2;



}
