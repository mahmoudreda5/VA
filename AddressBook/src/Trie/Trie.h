#include <bits/stdc++.h>

using namespace std;

const int ALPHABET_SIZE = 26;

class Trie {
public:
    bool isLeaf;
    Trie* character[ALPHABET_SIZE];

    Trie();
    void insert(string);
	bool search(string);
	bool haveChildren(Trie const*);
};
