//============================================================================
// Name        : AddressBook.cpp
// Author      : mahmoud reda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Trie/Trie.h"
using namespace std;

int main() {

	Trie* head = new Trie();

	head->insert("hello");
	cout << head->search("hello") << "\n";
	return 0;
}
