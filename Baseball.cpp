#include <iostream>
#include <string>
using namespace std;

class Batter {

	public:
		double average; //batting average
		Batter (double);

};

Batter::Batter (double a) {

	average = a;
}

class Team {

	public: 
		string name;
		Team (string);
		
};

Team::Team (string a) {

	name = a;
}

class Pitcher {

	public:
		double era; //earned run average
		Pitcher (double);
};

Pitcher::Pitcher (double a) {
	
	era = a;
}

class Game {

	
	public:
		int inning;
		Game (int);

};

Game::Game (int a) {

	inning = a;

}

int main() {

	Batter judd (0.500);
	Team brent ("winning");
	std::cout << judd.average << '\n';
	std::cout << brent.name << '\n';
	Game rachel (1);
	int a[5] = {0,1,2,3,4};
	for (int i : a) 
		cout << i << '\n';

}
