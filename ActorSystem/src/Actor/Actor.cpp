#include <bits/stdc++.h>
#include "Actor.h"

using namespace std;

DefaultCountActor::DefaultCountActor(string name)
{
	this->name = name;
	this->count = 0;
}

int DefaultCountActor::increase()
{
	return ++this->count;
}

int DefaultCountActor::decrease()
{
	return --this->count;
}

CountWithValueActor::CountWithValueActor(string name, int increment)
{
	this->name = name;
	this->count = 0;
	this->increment = increment;
}

int CountWithValueActor::increase()
{
	return this->count += this->increment;
}

int CountWithValueActor::decrease()
{
	return this->count -= this->increment;
}
