#include<iostream> 
using namespace std;

int MonsterGen(); //function prototype----------------------

int main() {
	int life = 100; 
	string input; //does nothing for this game, just use to pause loop. 
	while (life >= 0) {
		life -= MonsterGen();
		cout << "you currently have " << life << "HP left." << endl; 
		cout << "Press any key for next turn." << endl; 
		cin >> input;
	}
	cout << "you Died. Game Over." << endl; 
}

//function definition----------------------------------
int MonsterGen() {
	int num = rand() % 100; //generates a monster between 0-99
	if (num < 30) {
		cout << "A Zombie apperes!" << endl; 
		return 10; //represents the damage 
	}
	else if (num < 55) {
		cout << "A Skeleton attacks!" << endl; 
		return 15; 
	}
	else if (num < 75) {
		cout << "A Spider has appered!" << endl;
		return 20;
	}
	else if (num < 95) {
		cout << "A Witch attacks!" << endl;
		return 40;
	}
	else {
		cout << "No Monsters, you're safe this turn!" << endl;
		return 0; //no damage 
	}

}