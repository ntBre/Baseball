#include <iostream>
#include <string>
using namespace std;
#include "Batter.h"
#include "Team.h"
#include "Pitcher.h"
#include "Game.h"

Batter::Batter (double a) {

	average = a;
}


Team::Team (string a) {

	name = a;
}


Pitcher::Pitcher (double a) {
	
	era = a;
}


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
