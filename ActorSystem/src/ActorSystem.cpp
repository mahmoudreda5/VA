//============================================================================
// Name        : ActorSystem.cpp
// Author      : mahmoud reda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Actor/Actor.h"
using namespace std;

int main() {

	CountWithValueActor* actor = new CountWithValueActor("mahmoud reda", 7);
	cout << actor->name << "\n";
	return 0;
}
