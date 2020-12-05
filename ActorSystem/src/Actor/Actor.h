#include <bits/stdc++.h>

using namespace std;

// base abstract actror
class Actor {
public:
	string name;
	int count;

	int increase() = 0;
	int decrease() = 0;
};

class DefaultCountActor: Actor {
public:

	DefaultCountActor(string);
	// increase and decrease by one
	int increase();
	int decrease();
};

class CountWithValueActor: Actor {
public:
	int increment;

	CountWithValueActor(string, int);
	// increase and decrease by count value
	int increase();
	int decrease();
};
