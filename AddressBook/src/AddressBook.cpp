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

	Trie* trie = new Trie();

	int command = 1;
	string name, address;

	while(command) {
		cout << "enter 1 for insert a new person, 2 for search for a person and 3 for visualize\n";
		cin >> command;
		switch(command) {
			case 1:
				cout << "person name: \n";
				cin.ignore();
				getline(cin, name);
				cout << "person address: \n";
				cin.ignore();
				getline(cin, address);

				trie->insert(name, address);
			break;
			case 2:
				cout << "enter name to search: \n";
				cin.ignore();
				getline(cin, name);
				address = trie->search(name);
				cout << ((int)address.length() ? address : "no matched name") << "\n";
			break;
			case 3:
				trie->visualize();
			break;
		}
	}

	return 0;
}
