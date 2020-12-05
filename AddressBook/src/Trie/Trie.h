#include <bits/stdc++.h>

using namespace std;

const int ALPHABET_SIZE = 26;

class Trie {
public:
    bool isLeaf;
    string address;
    Trie* character[ALPHABET_SIZE];

    Trie();
    void insert(string, string);
	string search(string);
	bool haveChildren(Trie const*);
	void visualize();
};
