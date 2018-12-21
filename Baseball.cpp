#include <iostream>
#include <string>
using namespace std;
#include "Batter.h"
#include "Game.h"
#include "Team.h"
#include "Pitcher.h"

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
