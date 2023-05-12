#include<iostream>
using namespace std;


//decloration/prototype
int FeedTurtle(char FoodType, int amount);
//put the return typ first, then name, in the () put the parameters
int main() {
	int amt;
	char type;
	cout << "enter the type of food:" << endl;
	cin >> type;
	cout << "enter the amount of foode" << endl;
	cin >> amt;
	//call it 
	cout << "you reciveed turtle hunber by " << FeedTurtle(type, amt);



}

//definition 
int FeedTurtle(char FoodType, int amount) {
	if (FoodType == 'g')
		return amount;
		if (FoodType == 's')
			return amount * 2;
		if (FoodType == 'h')
			return amount * 3;
		return 0;

}